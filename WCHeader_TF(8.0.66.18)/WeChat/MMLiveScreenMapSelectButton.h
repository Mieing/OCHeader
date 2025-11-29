@class UIImageView, UILabel;

@interface MMLiveScreenMapSelectButton : MMUIButton

@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL hideLogo;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ screenMapSelectBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideLogo:(BOOL)a0 maxWidth:(double)a1;
- (void)setUpUI;
- (void)updateWithGameUserInfo:(id)a0;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void)heightToFit;
- (double)getPOILabelMaxWidth;
- (void)onClickPOIAction;
- (void).cxx_destruct;

@end
