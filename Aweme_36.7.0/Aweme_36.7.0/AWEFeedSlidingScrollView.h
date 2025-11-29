@class NSString;
@protocol AWEHPSlidingViewControllerMigrateDelegate;

@interface AWEFeedSlidingScrollView : UIScrollView <UIScrollViewDelegate, AWEBatManMessage>

@property (weak, nonatomic) id<AWEHPSlidingViewControllerMigrateDelegate> homepageDelegate;
@property (nonatomic) long long originBehavior;
@property (nonatomic) BOOL hasChangeContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)OpenTweakUI:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)beforeEnterBatMan;
- (void)afterExitBatMan;
- (void)beforeEnterToLandscapeFeedNotification:(id)a0;
- (void)afterQuitFromLandscapeFeedNotification:(id)a0;
- (BOOL)rightEdgePan:(id)a0;
- (BOOL)p_gestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;
- (BOOL)slidingScrollViewShouldScrollWithPan:(id)a0 reason:(id *)a1;
- (BOOL)allowsKeyboardScrolling;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;

@end
