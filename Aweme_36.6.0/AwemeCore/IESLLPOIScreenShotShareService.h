@class IESLLPOIDetailNGPageContext, NSDictionary, IESLLPOIScreenShootPanelSheet, IESLLPOIInfoModel, UIViewController;

@interface IESLLPOIScreenShotShareService : NSObject

@property (weak, nonatomic) UIViewController *target;
@property (retain, nonatomic) IESLLPOIInfoModel *poiInfo;
@property (nonatomic) BOOL isFavorited;
@property (retain, nonatomic) IESLLPOIScreenShootPanelSheet *currentSheet;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;

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
