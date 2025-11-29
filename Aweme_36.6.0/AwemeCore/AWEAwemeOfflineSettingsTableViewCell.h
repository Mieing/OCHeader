@class AWEAwemeOfflineSettingsModel, UILabel, DUXRadioBox, UIButton;
@protocol AWEAwemeOfflineTableViewCellDelegate;

@interface AWEAwemeOfflineSettingsTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *downloadedSignal;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UILabel *videoCountLabel;
@property (retain, nonatomic) UILabel *spaceCountLabel;
@property (retain, nonatomic) UILabel *playTimeCountLabel;
@property (retain, nonatomic) DUXRadioBox *downloadRadioBox;
@property (retain, nonatomic) AWEAwemeOfflineSettingsModel *model;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL radioSelected;
@property (weak, nonatomic) id<AWEAwemeOfflineTableViewCellDelegate> delegate;

- (void)onDownloadButtonClick;
- (void)configWithModel:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
