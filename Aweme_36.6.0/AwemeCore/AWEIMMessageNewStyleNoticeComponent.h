@class AWEIMUIImageViewPresenter, AWEIMWebImageViewPresenter, NSString, AWEIMYYLabelPresenter, AWEIMComponentManager;

@interface AWEIMMessageNewStyleNoticeComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageNoticeInterface>

@property (retain, nonatomic) AWEIMYYLabelPresenter *label;
@property (retain, nonatomic) AWEIMWebImageViewPresenter *imageView;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *arrowImageView;
@property (copy, nonatomic) NSString *iconLevelStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)refreshNoticeMessage;
- (void)p_didTapNotice;
- (BOOL)p_shouldShowArrowImage;
- (void)p_setupDisplayImage;
- (void)p_setupDisplayString;
- (void)p_setupArrowImage;
- (void)p_adaptNoticeLabelBackground;
- (BOOL)p_shouldShowSimplifiedStyle;
- (id)p_configDisplayString;
- (id)contentPlugin;
- (id)p_recoverRequireDays;
- (id)p_cardConfigWithLevel:(id)a0 isSingle:(BOOL)a1;
- (void)p_sendRecoveryFlame;
- (void)p_trackDidTapNoticeWithMessage:(id)a0;
- (BOOL)p_canShowGrowUpNoticeToast;
- (void)p_gotoFlameAchievementPage;
- (void).cxx_destruct;

@end
