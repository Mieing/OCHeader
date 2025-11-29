@class AWEPOIScreenShootPanelSheet, NSDictionary, AWEPOIDetailNGPageContext, AWEPOIInfoModel, UIViewController;

@interface AWEPOIScreenShotShareService : NSObject

@property (weak, nonatomic) UIViewController *target;
@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (nonatomic) BOOL isFavorited;
@property (retain, nonatomic) AWEPOIScreenShootPanelSheet *currentSheet;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;

+ (id)sharedInstance;

- (void)showPanel;
- (id)screenShotImage;
- (void)didReceivePOICollectionStatusChanged:(id)a0;
- (void)removeScreenShootShareTarget:(id)a0;
- (void)addTarget:(id)a0 withContext:(id)a1 trackParams:(id)a2;
- (void)userDidTakeScreenshoot:(id)a0;
- (id)screenShotImageData;
- (void)showFavoriceSuccessToast;
- (void)routeToFavorite:(id)a0;
- (BOOL)isObservingPOIPage;
- (void).cxx_destruct;

@end
