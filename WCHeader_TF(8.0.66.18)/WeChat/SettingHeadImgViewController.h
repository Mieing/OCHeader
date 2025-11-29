@class NSString, MMHDHeadImageView, SettingMyAccountExtInfoLogic;

@interface SettingHeadImgViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate> {
    MMHDHeadImageView *m_hdHeadImageView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

@property (nonatomic) BOOL operateDirectly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldRestrictContentViewSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)onImgSave;
- (void)Operate:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)onInfoChange;
- (void)onImgBeginChange:(id)a0;
- (void)onImgChangeEnd:(BOOL)a0 withError:(id)a1;
- (void).cxx_destruct;

@end
