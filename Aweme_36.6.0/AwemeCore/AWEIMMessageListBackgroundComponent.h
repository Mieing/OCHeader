@class NSString, NSMutableDictionary, AWEIMMessageListBackgroundView, AWEIMMessageListBackgroundChangInfo, UIView, AWEIMMessageListBackgroundImageTransformer;
@protocol AWEIMMessageListThemeInterface;

@interface AWEIMMessageListBackgroundComponent : AWEIMComponentBase <AWEIMMessageListBackgroundInterface, AWEIMMessageListDataAction, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListThemeAction>

@property (retain, nonatomic) AWEIMMessageListBackgroundView *backgroundImgView;
@property (copy, nonatomic) NSString *currentChatBgImageURI;
@property (retain, nonatomic) NSMutableDictionary *bgImageSetTrackParam;
@property (retain, nonatomic) AWEIMMessageListBackgroundChangInfo *currentInfo;
@property (weak, nonatomic) id<AWEIMMessageListThemeInterface> themeService;
@property (weak, nonatomic) UIView *heightView;
@property (retain, nonatomic) AWEIMMessageListBackgroundImageTransformer *transformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)isDisplayingBackgroundImage;
- (void)processChangeBgImgTemplate:(id)a0;
- (void)didTapShareBackgroundCell:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)floatViewControllerWillFirstShow:(id)a0;
- (void)themeDidChangeNoti:(id)a0;
- (void)onChatThemeDidChange:(id)a0;
- (void)p_trackPopUpEventWithStatus:(id)a0;
- (void)p_trackBgSetMonitor:(id)a0;
- (void)handleChatBackgroundSettingDidChange:(id)a0;
- (BOOL)p_isBackgroundBrightnessWithImage:(id)a0;
- (void)p_processChatBackgroundWithConversation:(id)a0;
- (void)p_makeHeightEqualToView:(id)a0;
- (void)p_processChangeBgImgTemplate:(id)a0;
- (void)p_changeBackgroundImage:(id)a0;
- (void)p_setChatbackgroundWithRemoteImageURI:(id)a0 skey:(id)a1;
- (void)p_resetChatBackgroundImgToDefault;
- (void)p_changeBackgroundImage:(id)a0 withCompletion:(id /* block */)a1;
- (void)p_insertBackgroundImageToViewHierarchy;
- (void)setImage:(id)a0 toImageView:(id)a1 withCompletion:(id /* block */)a2;
- (void)p_setSharedBgImageFromMessageWithMessage:(id)a0;
- (void)p_setSharedBgImageManualyWithURI:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
