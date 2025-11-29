@class UIImageView, UILabel, GetAdminListResponse_AdminUser;

@interface IESLiveAdminstratorListNewCell : IESLiveAdminNewCell

@property (retain, nonatomic) UIImageView *fansImage;
@property (retain, nonatomic) UILabel *statusLable;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) GetAdminListResponse_AdminUser *adminUserModel;
@property (nonatomic) unsigned long long adminUserType;

- (void)configWithManager:(id)a0;
- (void)configWithManagerModel:(id)a0;
- (void)settingBtnClicked:(id)a0;
- (BOOL)promptEnabled;
- (void)showAdminSettingSheetWithPromptEnabled:(id)a0;
- (void)refreshStatusLabelConfig;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
