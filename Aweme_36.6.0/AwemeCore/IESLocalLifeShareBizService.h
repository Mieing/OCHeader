@class NSString;

@interface IESLocalLifeShareBizService : HTSService <IESLocalLifeShareBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPlatformInstalled:(long long)a0;
+ (BOOL)openAppWithPlatform:(long long)a0;

- (void)showPanelWithPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)showPanelWithCouponPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)sharePOI:(id)a0 extraLogInfo:(id)a1 withType:(id)a2;

@end
