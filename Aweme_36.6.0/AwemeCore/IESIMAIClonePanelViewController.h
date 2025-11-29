@class UIStackView, UIView, NSString, UIImageView, IESIMAIClonePanelViewModel, UIButton, IESIMAISendMessageProactiveView, UIViewController, UILabel;
@protocol IESIMAICloneAvatarViewProtocol, IESIMContentSheetVCProtocol;

@interface IESIMAIClonePanelViewController : UIViewController <AWEIMInAppPushProtocol>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView<IESIMAICloneAvatarViewProtocol> *avatarView;
@property (retain, nonatomic) UILabel *aiCloneNicknameLabel;
@property (retain, nonatomic) UILabel *aiCloneSignatureLabel;
@property (retain, nonatomic) UILabel *descLeftLabel;
@property (retain, nonatomic) UILabel *descMidLabel;
@property (retain, nonatomic) UILabel *descRightLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESIMAISendMessageProactiveView *proactiveView;
@property (retain, nonatomic) UIStackView *stackContainer;
@property (retain, nonatomic) UIStackView *settingItemContainer;
@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) IESIMAIClonePanelViewModel *viewModel;
@property (weak, nonatomic) UIViewController<IESIMContentSheetVCProtocol> *containerSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithStyle:(unsigned long long)a0;

- (BOOL)canShowInnerPush;
- (void)p_setupCloseButton;
- (void)renderWithViewModel:(id)a0;
- (void)p_setupBind;
- (void)iesim_themeReload:(id)a0;
- (id)p_createButton;
- (void)p_configBackgroundColor;
- (void)p_configBGIfNeededWithViewModel:(id)a0;
- (void)p_configNickname:(id)a0;
- (void)p_configSignature:(id)a0;
- (void)p_configureButtonsWithButtonModels:(id)a0;
- (void)p_configureSettingItemsWithModel:(id)a0;
- (id)p_createProactiveViewIfNeeded;
- (void)p_setupBGIfNeeded;
- (void)p_creatorNicknameTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
