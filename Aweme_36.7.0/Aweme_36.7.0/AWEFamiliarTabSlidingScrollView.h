@class NSString;

@interface AWEFamiliarTabSlidingScrollView : UIScrollView <UIScrollViewDelegate, AWEBatManMessage>

@property (nonatomic) long long originBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beforeEnterBatMan;
- (void)afterExitBatMan;
- (void)beforeEnterToLandscapeFeedNotification:(id)a0;
- (void)afterQuitFromLandscapeFeedNotification:(id)a0;
- (BOOL)shouldRightPanToIMWithWidth:(double)a0;
- (BOOL)rightEdgePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
