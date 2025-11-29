@class NSArray, IESLivePSComponentConfigModel, IESLiveMessageFeaturedAreaView, NSString, IESLiveMessageFeaturedAreaAIViewModel, NSMutableArray;

@interface IESLiveMessageFeaturedFragment : IESLiveRoomComponent <IESLiveInteractAction, HTSLiveMessageSubscriber, IESLiveMessageFeaturedRouter, IESLiveMessageFeaturedAreaViewDelegate, IESLiveSocialInteractAction>

@property (nonatomic) BOOL enableMessageFeatured;
@property (nonatomic) BOOL needLoadMessageFeaturedWhenEnable;
@property (nonatomic) BOOL messageListDidShow;
@property (retain, nonatomic) IESLivePSComponentConfigModel *messageFeaturedComponentConfig;
@property (retain, nonatomic) IESLivePSComponentConfigModel *messageFeaturedComponentConfigForAI;
@property (retain, nonatomic) IESLiveMessageFeaturedAreaView *messageFeaturedView;
@property (retain, nonatomic) IESLiveMessageFeaturedAreaAIViewModel *viewModel;
@property (copy, nonatomic) NSArray *nextShowNodes;
@property (retain, nonatomic) NSMutableArray *nextShowMessages;
@property (copy, nonatomic) NSString *messageFeaturedSettingUrl;
@property (nonatomic) long long needCachedCountWhenHidden;
@property (nonatomic) long long needCachedBufferCountWhenSettingChanged;
@property (nonatomic) BOOL enablePSAssistant;
@property (nonatomic) long long mode;
@property (nonatomic) long long role;
@property (nonatomic) BOOL hasAdjustedPSHeightType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)messageListFirstFrameDidShow;
- (void)showMessageFeaturedArea;
- (void)showMessageFeaturedActionSheet;
- (long long)currentRole;
- (void)addPublicScreenAssistantToolbarItem;
- (void)addPublicScreenAssistantActionSheetItem;
- (void)addToolbarItem;
- (BOOL)showMessageFeaturedComponentWithReason:(id)a0 source:(id)a1;
- (void)trackMessageModeChangeWithNewMode:(long long)a0 source:(id)a1;
- (BOOL)hideMessageFeaturedComponentWithReason:(id)a0;
- (BOOL)updateMessageFeaturedConfigWithModeChanged:(BOOL)a0 roleChanged:(BOOL)a1 source:(id)a2;
- (id)getModeTextWithMode:(long long)a0;
- (void)trackMessageFeaturedEvent:(id)a0 extraParams:(id)a1;
- (id)currentComponentConfig;
- (void)updatePublicScreenHeightType;
- (void)saveCurrentShowingNodesWhenClose;
- (void)updateMessageFeaturedEnableStatus:(BOOL)a0;
- (void)openMessageFeaturedSettingLynxViewWithSource:(id)a0;
- (void)clickMessageFeaturedToolbarItem;
- (void)clickPSAssistantItemWithSource:(id)a0;
- (unsigned long long)getPublicScreenHeightType;
- (BOOL)canUpdatePublicScreenHeight;
- (void)setupMessageFeaturedAreaView:(id)a0;
- (void).cxx_destruct;
- (long long)currentMode;
- (void)messageReceived:(id)a0;

@end
