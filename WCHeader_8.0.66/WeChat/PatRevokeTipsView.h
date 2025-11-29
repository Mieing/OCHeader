@class CAShapeLayer, NSString, MMTimer, PatWrap, UIView, RichTextView, MMUIButton;
@protocol PatRevokeTipsViewDelegate;

@interface PatRevokeTipsView : UIView <SendPatExt>

@property (retain, nonatomic) PatWrap *patWrap;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headImageFrame;
@property (nonatomic) BOOL isHidingSelf;
@property (nonatomic) BOOL isShowBelowHeadImage;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMUIButton *revokeButton;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (nonatomic) double navigationBarBottom;
@property (nonatomic) double patSystemMessageAddHeight;
@property (weak, nonatomic) id<PatRevokeTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPatWrap:(id)a0 chatName:(id)a1;
- (void)dealloc;
- (void)initSubviews;
- (void)refreshViewWithHeadFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshLayer;
- (void)updateAnchorPoint;
- (id)generateBubbleLayer;
- (id)generateBubblePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowX:(double)a1;
- (void)addArrowToBezierPath:(id)a0;
- (void)doShowAnimation;
- (void)animationHiddenSelf;
- (void)showWithHeadFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickRevokeButton;
- (void)onRevokePat:(id)a0 fromChat:(id)a1 isSuccess:(BOOL)a2;
- (void).cxx_destruct;

@end
