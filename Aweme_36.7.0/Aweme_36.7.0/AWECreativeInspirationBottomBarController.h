@class UIView, NSString, NSObject;
@protocol AWECreativeInspirationBottomBarViewInterface, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWECreativeInspirationBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) UIView<AWECreativeInspirationBottomBarViewInterface> *bottomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
