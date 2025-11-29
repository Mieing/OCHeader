@interface WXApi : NSObject

+ (BOOL)isWechatApp;
+ (void)sendPayReq:(id)a0 extraData:(id)a1 completion:(id /* block */)a2;

@end
