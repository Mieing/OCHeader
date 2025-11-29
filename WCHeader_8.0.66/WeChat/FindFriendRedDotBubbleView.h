@class WCFinderRedDotTipsShowInfo, UITapGestureRecognizer, WCFinderHeadImageView, CAShapeLayer, UIView, RichTextView, MMBadgeView;

@interface FindFriendRedDotBubbleView : UIView

@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UIView *headImageTopView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ callback;

+ (BOOL)validateShowInfo:(id)a0;

- (id)initWithShowInfo:(id)a0;
- (void)adjustAnchorPoint;
- (void)initContentView;
- (void)layoutContentView;
- (void)initTapGesture;
- (void)handleTap:(id)a0;
- (void)updateArrowAtPoint:(struct CGPoint { double x0; double x1; })a0 width:(double)a1;
- (void)generateBubbleLayerForArrowPosition:(double)a0;
- (void)updateTapCallback:(id /* block */)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
