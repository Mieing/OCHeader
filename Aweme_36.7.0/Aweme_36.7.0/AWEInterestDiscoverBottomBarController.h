@class NSString, AWEAwemeModel, AWEInterestDiscoverBottomView, AWEInterestDiscoverBottomBarContext;

@interface AWEInterestDiscoverBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWEInterestDiscoverBottomBarContext *context;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEInterestDiscoverBottomView *bottomView;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)updateCurrentIndexPath:(long long)a0;
- (void)clickBottomView;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
