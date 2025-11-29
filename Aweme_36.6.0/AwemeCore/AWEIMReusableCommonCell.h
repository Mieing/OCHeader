@class AWEIMComponentViewCache, AWEIMComponentContext, NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer;
@protocol AWEIMFlexComponentCtxProtocol;

@interface AWEIMReusableCommonCell : UITableViewCell <AWEIMReusableCell>

@property (nonatomic) BOOL hasFeedbackTriggered;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) struct CGPoint { double x0; double x1; } originalCenter;
@property (retain, nonatomic) UIPanGestureRecognizer *leftSwipeGestureRecognizer;
@property (retain, nonatomic) AWEIMComponentViewCache *viewMaps;
@property (weak, nonatomic) AWEIMComponentContext<AWEIMFlexComponentCtxProtocol> *currentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerQuoteReply;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleLeftSwipe:(id)a0;
- (void)setupSwipeGesture;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)xxhandleLongPressGesture:(id)a0;
- (id)contentTargetView;
- (void)renderWithHolder:(id)a0;
- (id)protocolCache;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (BOOL)conformsToProtocol:(id)a0;

@end
