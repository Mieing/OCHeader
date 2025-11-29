@class NSString;

@interface AWESharePOIService : AWEShareCommonImpl <AWESharePOI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPanelWithPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)showPanelWithCouponPOI:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (void)showPanelWithPOIRank:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (id)sharePOI:(id)a0 extraLogInfo:(id)a1 withType:(id)a2;
- (id)contextWithPOI:(id)a0;
- (id)statsSharePOIStage;
- (id)prepareSharePOIModelStage;
- (id)contextWithCouponPOI:(id)a0;
- (id)statsShareCouponStage;
- (id)contextWithPOIRank:(id)a0;
- (id)taskWithPOI:(id)a0;
- (void)additionalConfigForPOIWithModel:(id)a0 context:(id)a1;

@end
