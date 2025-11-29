@class UIImageView, UIActivityIndicatorView, UIView, MMUILabel;
@protocol MMLimitedModeBizCellDelegate;

@interface MMLimitedModeBizCell : MMTableViewCell

@property (nonatomic) long long bizType;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (weak, nonatomic) id<MMLimitedModeBizCellDelegate> delegate;

+ (id)cellInTableView:(id)a0 delegate:(id)a1;
+ (double)cellHeight;

- (void)updateWithBizType:(long long)a0 position:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void).cxx_destruct;

@end
