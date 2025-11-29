@class UIColor, UILabel, UIImageView;

@interface AWEUserBubbleView : UIView

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPosition;

- (id)initWithContent:(id)a0 direction:(unsigned long long)a1 margin:(unsigned long long)a2 offset:(double)a3 font:(id)a4 textAlignment:(long long)a5 maxWidth:(double)a6;
- (void)setupWithDirection:(unsigned long long)a0 margin:(unsigned long long)a1 offset:(double)a2 maxWidth:(double)a3;
- (id)initWithContent:(id)a0 direction:(unsigned long long)a1 margin:(unsigned long long)a2 offset:(double)a3;
- (void).cxx_destruct;

@end
