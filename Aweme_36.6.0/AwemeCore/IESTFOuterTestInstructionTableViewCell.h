@class IESTFOuterTestInstructionViewModel, NSString, IESOuterTestAreaButton, NSIndexPath, UIImageView, IESOuterTestInstructionAppearance, UILabel, UIColor;

@interface IESTFOuterTestInstructionTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *statusIconImageView;
@property (retain, nonatomic) UIImageView *appIconImageView;
@property (retain, nonatomic) UILabel *appDescLabel;
@property (retain, nonatomic) IESOuterTestAreaButton *installButton;
@property (retain, nonatomic) UIImageView *installBtnBGImageView;
@property (retain, nonatomic) IESTFOuterTestInstructionViewModel *viewModel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UIColor *installButtonToInstallColor;
@property (retain, nonatomic) UIColor *installButtonInstalledColor;
@property (copy, nonatomic) NSString *installButtonToInstallImageURL;
@property (copy, nonatomic) NSString *installButtonInstalledImageURL;
@property (readonly, nonatomic) double installButtonCornerRadius;
@property (retain, nonatomic) IESOuterTestInstructionAppearance *appearance;

+ (double)heightForTableView:(id)a0 withViewModel:(id)a1 atIndexPath:(id)a2;

- (void)configSubviews;
- (void)setInstallButtonToInstallBGColor:(id)a0 toInstallImageURL:(id)a1;
- (void)setInstallButtonInstalledBGColor:(id)a0 installedImageURL:(id)a1;
- (void)updateViewWithViewModel:(id)a0 indexPath:(id)a1;
- (void)onClickInstallButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
