@class UIView, NSString, AWEIMMuteSettingsSectionView, UIImageView, NSDictionary, AWEIMMuteSettingsModel, UIButton, UILabel;

@interface AWEIMMuteSettingsViewController : UIViewController <AWEIMMuteSettingsRowViewDelegate>

@property (retain, nonatomic) AWEIMMuteSettingsModel *model;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEIMMuteSettingsSectionView *firstSectionView;
@property (retain, nonatomic) AWEIMMuteSettingsSectionView *secondSectionView;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__requestLogWithCon:(id)a0 desc:(id)a1 target:(BOOL)a2;
+ (void)__responseLogWithResp:(id)a0 con:(id)a1 desc:(id)a2;

- (id)conversationDataManager;
- (void)__dismiss;
- (void)__setupUI;
- (void)muteSettingsRowViewSwitchChangedWithView:(id)a0 isOn:(BOOL)a1;
- (double)__containerViewHieght;
- (void)__viewDidAppearTracker;
- (void)__showAnimtionWithCompletion:(id /* block */)a0;
- (BOOL)__isAllMessageMute;
- (void)__dismissViewControllerTracker;
- (void)__dismissAnimtionWithCompletion:(id /* block */)a0;
- (void)__saveRemoteAllItemsWithDesc:(id)a0;
- (void)__updateRemoteAllMessageMuteWithItem:(id)a0;
- (void)__updateAllMessageMuteAnomation;
- (void)__updateLocalMuteItemsWithItem:(id)a0;
- (void)__openAllLocalItems;
- (BOOL)__forbidInteractive;
- (void)__handlePanContainerViewGesture:(id)a0;
- (id)initWithConversation:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
