@class NSTimer, NSString, UITapGestureRecognizer, BDPUniqueID, CAShapeLayer, UIButton, BDPBubbleTipModel, BDPTimingEvent, UILabel;
@protocol BDPBubbleTipDelegate;

@interface BDPBubbleTip : UIView <CAAnimationDelegate> {
    CAShapeLayer *_borderLayer;
    UILabel *_tipLabel;
    UIButton *_closeButton;
    NSTimer *_hideTimer;
    NSTimer *_showTimer;
    BDPTimingEvent *_trackerTiming;
}

@property (retain, nonatomic) BDPBubbleTipModel *tipModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *defaultTapGesture;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (weak, nonatomic) id<BDPBubbleTipDelegate> delegate;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isBubbleShown;
@property (copy, nonatomic) id /* block */ bubbleShowCompletion;
@property (copy, nonatomic) id /* block */ bubbleHideCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUpModelWithDefaultValue:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caculateFrameWithTipModel:(id)a0;

- (void)closeBtnClicked:(id)a0;
- (void)showOnView:(id)a0;
- (void)tapGestureAction:(id)a0;
- (void)setupAnimation;
- (id)initWithDelegate:(id)a0 tipModel:(id)a1;
- (void)layoutBubbleWithOrigin:(struct CGPoint { double x0; double x1; })a0 reverseOffsetX:(double)a1;
- (void)hideWithUser;
- (void)hideWithCP;
- (void)addGestureRecognizerToLabel:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
