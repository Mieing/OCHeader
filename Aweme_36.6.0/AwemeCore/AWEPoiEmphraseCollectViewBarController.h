@class AWEPoiEmphraseCollectViewBarContext, NSString, NSDictionary, UIViewController;
@protocol AWEPOIEmphraseCollectAnchorViewControllerProtocol;

@interface AWEPoiEmphraseCollectViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIViewController<AWEPOIEmphraseCollectAnchorViewControllerProtocol> *poiEmphraseCollectAnchorViewController;
@property (retain, nonatomic) AWEPoiEmphraseCollectViewBarContext *context;
@property (readonly, copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)handleOuterFavoriteActionNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomBarFrame;

@end
