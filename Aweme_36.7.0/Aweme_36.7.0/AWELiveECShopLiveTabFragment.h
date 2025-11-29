@class NSString, NSDictionary, AWELiveECShopLiveTabFeedController, UIView;
@protocol IESLiveSquareService;

@interface AWELiveECShopLiveTabFragment : IESLiveRoomComponent <IESLiveInnerFeedDisplayAction>

@property (weak, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *topLeftContainer;
@property (retain, nonatomic) UIView *guideContainer;
@property (retain, nonatomic) AWELiveECShopLiveTabFeedController *feedController;
@property (retain, nonatomic) id<IESLiveSquareService> squareService;
@property (retain, nonatomic) NSDictionary *ecomParams;
@property (nonatomic) BOOL didUnMount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)createFeedController;
- (void)showSwipeGuideIfNeed;
- (void)hideSwipeGuide;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
