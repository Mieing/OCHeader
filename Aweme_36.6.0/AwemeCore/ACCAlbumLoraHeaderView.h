@class ACCAIGCLoraPersonInfo, UIImageView, DUXButton, UIView, UILabel, UIButton;

@interface ACCAlbumLoraHeaderView : UIView

@property (retain, nonatomic) UIImageView *loraIconView;
@property (retain, nonatomic) UIImageView *loraMakingMaskView;
@property (retain, nonatomic) UIView *switchBackgroundView;
@property (retain, nonatomic) UIImageView *switchIconView;
@property (retain, nonatomic) UIButton *switchLoraButton;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) DUXButton *useLoraButton;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *profile;
@property (nonatomic) BOOL isCreateScene;
@property (copy, nonatomic) id /* block */ useLoraBlock;
@property (copy, nonatomic) id /* block */ switchLoraBlock;

- (void)updateLoraStatusWithProfile:(id)a0;
- (void)updateToMakingStatus;
- (void)updateToSelectStatus;
- (void)updateToCreateStatus;
- (void)onSwitchLoraButtonClick:(id)a0;
- (void)onUseLoraButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
