@class UIImageView, UILabel, FinderJumpInfo;

@interface WCFinderProfileWinterOlympicsView : UIImageView

@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL displayCoveredMode;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showDarkStyle;
- (void)updateBG;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onClick;
- (void).cxx_destruct;

@end
