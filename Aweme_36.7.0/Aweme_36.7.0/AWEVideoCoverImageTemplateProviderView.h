@class UIImageView, NSDictionary, UILabel, AWEImageTemplateEditViewModel, UIButton;

@interface AWEVideoCoverImageTemplateProviderView : UIView

@property (retain, nonatomic) UIImageView *providerIcon;
@property (retain, nonatomic) UILabel *authorHintLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSDictionary *imageTemplateSettings;
@property (retain, nonatomic) NSDictionary *headerImageForCopyrightAlertView;
@property (nonatomic) long long currentTemplatePlatform;
@property (retain, nonatomic) AWEImageTemplateEditViewModel *viewModel;

- (void)actionButtonClicked:(id)a0;
- (void)p_setupData;
- (void)p_setupConstraint;
- (void)p_updateAuthorInfoWithTemplateInfoModel:(id)a0 shouldHideAuthorInfo:(BOOL)a1;
- (void)p_updateComplianceBtnInfoWithTemplateInfoModel:(id)a0;
- (void)p_fetchUserAvatarByUserID:(id)a0 completion:(id /* block */)a1;
- (id)p_getSettingsInfoForPlatform:(long long)a0 actorInfoDic:(id)a1;
- (BOOL)isCoverToolsExperienceOpt1;
- (void)updateAuthorInfoWithModel:(id)a0 shouldHidden:(BOOL)a1;
- (void)updateComplianceInfoWithTemplateInfoModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
