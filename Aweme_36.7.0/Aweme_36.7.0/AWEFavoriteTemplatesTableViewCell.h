@class UIButton, UIStackView, UIImageView, NSString, UILabel, AWEAweMVTemplateModel, UIView;

@interface AWEFavoriteTemplatesTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *usageAmountLabel;
@property (retain, nonatomic) UIImageView *enterDetailView;
@property (retain, nonatomic) UIView *enterDetailGestureView;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIStackView *templateStackView;
@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UIView *accessibilityContainerLeftView;
@property (retain, nonatomic) UIView *accessibilityContainerRightView;
@property (retain, nonatomic) UIView *shootButtonSpaceView;
@property (copy, nonatomic) NSString *clickEnterMethod;
@property (copy, nonatomic) id /* block */ enterTemplateDetailBlock;

+ (id)identifier;
+ (double)cellHeight;

- (id)enterMethod;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)p_enterDetailViewDidClicked:(id)a0;
- (void)enterDetailViewDidClicked:(id)a0;
- (void)p_setupNewProfileUI;
- (void)p_setupDefaultUI;
- (void)updateWithModel:(id)a0 index:(long long)a1;
- (id)p_convertUsageAmountToHint:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
