@class NSString;

@interface IESLocalLifeShareHostService : HTSService <IESLocalLifeShareHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPlatformInstalled:(long long)a0;
+ (BOOL)openAppWithPlatform:(long long)a0;
+ (id)abilityKeys;

- (void)showPanelWithPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)showPanelWithCouponPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)sharePOI:(id)a0 extraLogInfo:(id)a1 withType:(id)a2;
- (void)showPanelWithPOIGoodsModel:(id)a0 withCompletion:(id /* block */)a1;
- (id)convertShareWebModel:(id)a0;
- (unsigned long long)transformShareResult:(unsigned long long)a0;
- (id)convertShareContext:(id)a0;
- (id)tranfromPoiInfoFromIESLL:(id)a0;
- (void)showPanelWithPOIGoodsModel:(id)a0;

@end
