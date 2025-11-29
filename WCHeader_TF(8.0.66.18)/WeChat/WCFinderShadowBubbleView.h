@class UIColor, UIImageView, WCFinderRichTextView, UIView;

@interface WCFinderShadowBubbleView : UIView

@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) WCFinderRichTextView *bubbleTextView;
@property (retain, nonatomic) UIView *textViewContainer;
@property (retain, nonatomic) UIImageView *triangleBView;
@property (retain, nonatomic) UIColor *bkColor;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) BOOL useRawContent;
@property (nonatomic) unsigned int shadowBubbleType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bkColor:(id)a1 fontColor:(id)a2;
- (BOOL)updateShadowBubbleViewWithCustomTitle:(id)a0 labelMaxWid:(double)a1;
- (id)replaceDynamicIconColorWithContent:(id)a0 colorString:(id)a1;
- (BOOL)updateShadowBubbleViewWithType:(unsigned int)a0 labelMaxWid:(double)a1;
- (void)updateBottomTipsLayoutWithOffset:(double)a0;
- (void)updateTopTipsLayoutWithOffset:(double)a0;
- (void).cxx_destruct;

@end
