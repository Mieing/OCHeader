@class UIColor, UIImageView, WCFinderRichTextView, UIView;

@interface WCFinderBlurBubbleView : UIView

@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) WCFinderRichTextView *bubbleTextView;
@property (retain, nonatomic) UIView *textViewContainer;
@property (retain, nonatomic) UIView *triangleBViewShadowView;
@property (retain, nonatomic) UIImageView *triangleBView;
@property (retain, nonatomic) UIColor *bkColor;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) BOOL useRawContent;
@property (nonatomic) BOOL hasTriangleArrow;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bkColor:(id)a1 fontColor:(id)a2;
- (BOOL)updateBlurBubbleViewWithCustomTitle:(id)a0 labelMaxWid:(double)a1;
- (id)replaceDynamicIconColorWithContent:(id)a0 colorString:(id)a1;
- (void)updateBottomTipsLayoutWithOffset:(double)a0;
- (void).cxx_destruct;

@end
