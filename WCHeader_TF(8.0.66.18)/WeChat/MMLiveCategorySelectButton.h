@class UIImageView, UILabel, FinderLiveTagInfo;

@interface MMLiveCategorySelectButton : MMUIButton

@property (retain, nonatomic) FinderLiveTagInfo *tagInfo;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL hideLogo;
@property (nonatomic) double maxWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideLogo:(BOOL)a0 maxWidth:(double)a1;
- (void)updateWithTag:(id)a0;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void).cxx_destruct;

@end
