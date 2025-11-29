@class UIImageView, UILabel, NSString;

@interface AWERecordInspirationTalentTaskCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) NSString *activitySchema;

- (void)onThemeChanged;
- (void)bindNotification;
- (void)updateTitleLabelColor:(id)a0;
- (void)configWithTaskModel:(id)a0;
- (id)cropImageToFit:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
