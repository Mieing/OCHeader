@class NSString, AWENearbyHotSpotBottomView, AWENearbyHotSpotBottomBarContext, AWEAwemeModel;

@interface AWENearbyHotSpotBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWENearbyHotSpotBottomView *bottomView;
@property (retain, nonatomic) AWENearbyHotSpotBottomBarContext *context;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (BOOL)shouldUpdateUI:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
