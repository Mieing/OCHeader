@class UILabel, UIView;

@interface AWEBizUIBubble : UIControl

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) id /* block */ tapBlock;

+ (id)contentWithBubbleContent:(id)a0 highlightContent:(id)a1;
+ (double)adaptiveFontSize:(double)a0;
+ (id)favoriteHintContent;

- (void)p_tapped;
- (double)p_arrowXPositionForCenterX:(double)a0;
- (void)p_addMaskWithPositionX:(double)a0 direction:(unsigned long long)a1;
- (void)showOnView:(id)a0 content:(id)a1 anchor:(id)a2 direction:(unsigned long long)a3 yOffset:(double)a4 animted:(BOOL)a5;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
