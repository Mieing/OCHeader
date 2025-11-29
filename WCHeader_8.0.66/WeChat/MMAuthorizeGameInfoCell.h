@class MMAuthorizeGameInfoCellVM, UIImageView, UIView, MMUILabel;

@interface MMAuthorizeGameInfoCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *authLevelLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *topSeperatorLine;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) MMAuthorizeGameInfoCellVM *vm;

+ (double)leftPadding;
+ (double)rightPadding;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)applyViewModel:(id)a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)wordingForSelectStatus;
- (void).cxx_destruct;

@end
