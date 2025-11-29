@class NSString;

@interface AWEUserPromotionAuthManager : NSObject <AWEUserPromotionAuthManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isToutiaoInstalled;
+ (void)handleFansPromotionWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)handleToutiaoPromotionWithScheme:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isPromotionSupported:(id)a0;
+ (id)promotionMsgWithModel:(id)a0;
+ (BOOL)isAppInstalledWithModel:(id)a0;


@end
