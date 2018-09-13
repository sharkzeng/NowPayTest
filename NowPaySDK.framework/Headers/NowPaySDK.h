//
//  NowPaySDK.h
//  NowPaySDK
//
//  Created by Zhangxz& on 2018/8/9.
//  Copyright © 2018年 Zhangxz&. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef void(^CompletionBlock)(NSDictionary *resultDic);
@interface NowPaySDK : NSObject
/**
 *  创建支付单例服务
 *
 *  @return 返回单例对象
 */
+(NowPaySDK *)defaultService;
/**
 *  支付接口
 *
 *  @param porder            订单号
 *  @param schemeStr      调用支付的app注册在info.plist中的scheme
 *  @param sdkID             sdkID
 *  @param appKey          appKey
 *  @param completionBlock 是否跳转
 */

- (void)payOrder:(NSString *)porder
                sdkId:(NSString *)sdkID
             appKey:(NSString *)appKey
                token:(NSString *)token
      fromScheme:(NSString *)schemeStr
            callback:(CompletionBlock)completionBlock;
@end
