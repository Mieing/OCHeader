@class NSString, NSAttributedString;
@protocol IESIMGroupLiveStateInterface, AWEIMChatCellLiveStatusInterface, AWEIMChatCellHintComponentInterface;

@interface AWEIMChatCellOnLineDotComponent : AWEIMChatCellComponentBase <AWEIMChatCellOnLineDotInterface>

@property (nonatomic) BOOL isDisplayingOnLineDot;
@property (retain, nonatomic) NSAttributedString *onlineAttributedString;
@property (nonatomic) long long conversationActiveType;
@property (nonatomic) BOOL hasBindActive;
@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintService;
@property (weak, nonatomic) id<AWEIMChatCellLiveStatusInterface> liveStatusService;
@property (weak, nonatomic) id<IESIMGroupLiveStateInterface> groupLiveStatusService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateShowWithCanShow:(BOOL)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentWhenCellPrepareForReuse;
- (void)p_removeMonitor;
- (void)p_onUserPrivacySettingChange;
- (void)createPresenterWithChat:(id)a0;
- (void)p_updateMessageLabelWithOnlineInfo:(id)a0 chat:(id)a1;
- (id)belongPageIdentifier;
- (id)p_uniqueFlag;
- (void)p_updateShow:(BOOL)a0;
- (void)p_updateTrackWithOnlineInfo:(id)a0 uid:(id)a1;
- (void)p_notifyWhenOnlineInfoChanged:(id)a0 chat:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
