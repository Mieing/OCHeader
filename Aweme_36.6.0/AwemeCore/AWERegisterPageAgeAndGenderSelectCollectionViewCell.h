@class UILabel, UIImageView;

@interface AWERegisterPageAgeAndGenderSelectCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *contenTextLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *selectBirthdayTipsLabel;
@property (nonatomic) long long type;

+ (id)identifier;

- (void)configWithContentType:(long long)a0;
- (void)removeDarkBorder;
- (void)addDarkBorder;
- (void)setBirthdayWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
