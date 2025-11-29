@interface AWEFeedCGDirectPlayCardUtil : NSObject

+ (id)settingConfig;
+ (BOOL)isSubscriptionCard:(id)a0;
+ (id)cardNameFromCardInfo:(id)a0;
+ (void)color:(id)a0 hsbFrom0To360:(double *)a1 saturation:(double *)a2 brightness:(double *)a3 alpha:(double *)a4;
+ (id)colorFromHSBFrom0To360:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)serverDataFromCardInfo:(id)a0;
+ (id)getSnapshotForView:(id)a0;
+ (void)landscapeColorPickingFromImage:(id)a0 async:(BOOL)a1 completion:(id /* block */)a2;
+ (void)portraitColorPickingFromImage:(id)a0 async:(BOOL)a1 completion:(id /* block */)a2;
+ (id)maskViewConfigFromCardInfo:(id)a0;
+ (id)subscriptionSourceFromCardInfo:(id)a0;
+ (id)traceIDFromCardInfo:(id)a0;
+ (BOOL)subscriptionStatusFromCardInfo:(id)a0;
+ (id)gameSchemaFromCardInfo:(id)a0;
+ (id)unsubscribePanelURLWithBusinessID:(id)a0 imprID:(id)a1 cardInfo:(id)a2;
+ (void)showToastOnView:(id)a0 withText:(id)a1 duration:(long long)a2;
+ (struct CGSize { double x0; double x1; })gameRenderSizeForLandscapeGame;

@end
