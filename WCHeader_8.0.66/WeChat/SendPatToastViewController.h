@class PatWrap, MMTimer, CAShapeLayer, SendPatToastWindow, UIView, RichTextView, NSString;

@interface SendPatToastViewController : MMWindowViewController <SendPatToastWindowDelegate, SendPatExt>

@property (weak, nonatomic) SendPatToastWindow *window;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL hideAfterShown;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) PatWrap *patWrap;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headImageFrame;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initSubviews;
- (void)refreshContent;
- (void)refreshView;
- (void)refreshLayer;
- (void)updateAnchorPoint;
- (id)generateBubbleLayer;
- (id)generateBubblePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowX:(double)a1;
- (void)addArrowToBezierPath:(id)a0;
- (void)show;
- (void)hide;
- (void)hideWithAnimated:(int)a0;
- (void)onFireTimer;
- (void)doShowAnimation;
- (void)doUpdateAnimationWithCompletionBlock:(id /* block */)a0;
- (void)onDeviceOrienationChange:(id)a0;
- (void)onTouchWindow;
- (void)onUpdatePatSuffixWrap:(id)a0 forUser:(id)a1;
- (void).cxx_destruct;

@end
