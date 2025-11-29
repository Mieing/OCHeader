@class UILabel, NSLayoutConstraint;

@interface BDXCategoryNumberCell : BDXCategoryTitleCell

@property (retain, nonatomic) NSLayoutConstraint *numberCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *numberCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *numberHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *numberWidthConstraint;
@property (retain, nonatomic) UILabel *numberLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadData:(id)a0;
- (void)initializeViews;

@end
