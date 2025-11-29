@class NSString, UILabel, UIView, UIButton;

@interface AWEIMGroupEntryLimitsHeaderFooterView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSString *toastString;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL useCardStyle;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *detailIconButton;
@property (copy, nonatomic) id /* block */ showMoreDetailBlock;

+ (id)identifier;

- (void)__setupUI;
- (void)__pressDetailIconBtn;
- (void)configUseHeaderTypeWithTitle:(id)a0 subTitle:(id)a1;
- (void)configUseFooterType;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;

@end
