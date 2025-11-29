@class AWEIMEmoticonPanelContext, NSMutableDictionary, NSString, AWEIMEmoticonPanelTabInitContext, UIView, AWEIMInputVCBadgeButton;
@protocol AWEIMEmoticonContainerViewProtocol;

@interface IESIMInputEmoticonComponent : AWEIMComponentBase <IESIMInputEmoticonComponentInterface, UIGestureRecognizerDelegate, IESIMInputKeyboardComponentAction, AWEIMEmoticonKeyBoardDelegate, IESIMInputStateChangedActionProtocol, IESIMInputThemeChangedAction, IESIMInputLayoutAction>

@property (retain, nonatomic) AWEIMInputVCBadgeButton *emoticonBtn;
@property (retain, nonatomic) AWEIMEmoticonPanelTabInitContext *tabInitContext;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) double emoticonBtnClickedTime;
@property (retain, nonatomic) NSMutableDictionary *scrollToEnterMethod;
@property (retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emoticonView;
@property (retain, nonatomic) AWEIMEmoticonPanelContext *panelContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)emoticonViewDidChangedSeletedInfoModel:(id)a0;
- (void)emoticonViewDidSelectTabSearch:(id)a0;
- (void)trackEmoticonWithModel:(id)a0 type:(int)a1;
- (void)trackLongPressPrevewEmoji:(id)a0 style:(long long)a1;
- (BOOL)enableDrag;
- (id)currentSelectedInfoModel;
- (void)hostVC_willDealloc;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)scrollToEmoticonUniqueId:(id)a0 animated:(BOOL)a1 enterMethod:(id)a2;
- (void)emoticonBtnClicked:(id)a0;
- (BOOL)hasPanel;
- (void)p_handleEmoticonThemeChanged;
- (id)emoticonEnterFrom;
- (void)__resumeAttributeGloableSettingIfNeeded;
- (void)emoticonPanelPanGesHandler:(id)a0;
- (void)emoticonPanelTapGesHandler:(id)a0;
- (void)__updateAttributeGlobalSettingWithInputViewType:(long long)a0;
- (void)p_addEmoticonViewIfNeeded;
- (void)p_updateEmoticonViewEnterFrom;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputBarHeight:(double)a1 animated:(BOOL)a2 refreshContext:(id)a3;
- (void)triggerLayoutAfterPanelChangeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)emoticonButton;
- (long long)emoticonThemeStyle;
- (void)adjustInputPanelSendBtn:(BOOL)a0;
- (double)defaultPanelViewHeight;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)keyboardDidShow;
- (void)p_removeObservers;

@end
