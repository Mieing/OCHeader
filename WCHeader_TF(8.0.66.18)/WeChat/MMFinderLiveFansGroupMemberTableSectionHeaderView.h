@class UIImageView, MMUILabel;

@interface MMFinderLiveFansGroupMemberTableSectionHeaderView : UIView

@property (nonatomic) unsigned int fansGroupMemCount;
@property (retain, nonatomic) MMUILabel *fansGroupMemCountLabel;
@property (retain, nonatomic) MMUILabel *fansGroupWarmHeartLabel;
@property (nonatomic) BOOL shouldAdaptToDarkLight;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) UIImageView *memberArrowImageView;
@property (retain, nonatomic) UIImageView *warmArrowImageView;
@property (copy, nonatomic) id /* block */ onMemberTitleClicked;
@property (copy, nonatomic) id /* block */ onWarmTitleClicked;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1;
- (void)initTapGesture;
- (void)onSelfTapped:(id)a0;
- (void)updateMemberTitle:(id)a0 showExpandArrow:(BOOL)a1;
- (void)updateWarmTitle:(id)a0 showExpandArrow:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFansGroupMemCountLabel;
- (void)updateFansGroupMemCountOrigin;
- (void)layoutFansGroupWarnHeartLabel;
- (void).cxx_destruct;

@end
