@class NSString, AWEAwemeModel, UIView, UIScrollView, NSObject;
@protocol AWEAdLandingPageLokiManager;

@interface AWECommerceQponLandingManager : NSObject <AWECommerceQponLandingManager>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSObject<AWEAdLandingPageLokiManager> *lokiManager;
@property (nonatomic) BOOL isCardExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)landingPageCouponStyleCanShowWithAweme:(id)a0;

- (void)handleWebLandingPageEventWithAwemeIfNeed:(id)a0 container:(id)a1 scrollView:(id)a2;
- (void)handleLynxLandingPageEventWithAwemeIfNeed:(id)a0 container:(id)a1 rifleView:(id)a2;
- (void)handleLandingPageEventWithAwemeIfNeed:(id)a0 container:(id)a1 scrollView:(id)a2;
- (void)setupLoki;
- (void)observePanGesture;
- (void)observeScrollViewOffset;
- (BOOL)isSlideUp;
- (void)sendCardShowEvent;
- (void).cxx_destruct;
- (void)reset;

@end
