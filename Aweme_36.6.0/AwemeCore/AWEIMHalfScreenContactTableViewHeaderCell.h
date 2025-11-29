@class UIImageView, UILabel, UIView;

@interface AWEIMHalfScreenContactTableViewHeaderCell : UIButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconInternalView;
@property (retain, nonatomic) UILabel *featureLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *tapImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) long long type;

+ (id)identifier;

- (void)p_setupUIWithContext:(id)a0;
- (void)configWithType:(long long)a0 context:(id)a1;
- (BOOL)isExternalShareCell;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 context:(id)a1;

@end
