@class UILabel, NSString, UIView;

@interface IESLLPOIFavoriteBubble : UIControl

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (nonatomic) BOOL isDisplaying;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)p_tapped;
- (double)p_arrowXPositionForCenterX:(double)a0;
- (void)p_addMaskWithPositionX:(double)a0 direction:(unsigned long long)a1;
- (void)showOnView:(id)a0 anchor:(id)a1 direction:(unsigned long long)a2 yOffset:(double)a3 animated:(BOOL)a4;
- (void)showOnView:(id)a0 anchor:(id)a1 direction:(unsigned long long)a2 yOffset:(double)a3 animated:(BOOL)a4 duration:(double)a5;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
