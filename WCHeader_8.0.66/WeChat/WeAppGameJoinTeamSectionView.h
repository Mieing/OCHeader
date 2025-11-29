@class MMUIImageView, MMUILabel;

@interface WeAppGameJoinTeamSectionView : MMUIButton

@property (retain, nonatomic) MMUIImageView *leftIconView;
@property (retain, nonatomic) MMUILabel *wordingLable;
@property (retain, nonatomic) MMUILabel *conditionLable;
@property (retain, nonatomic) MMUIImageView *rightIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)updateDesc:(id)a0;
- (void).cxx_destruct;

@end
