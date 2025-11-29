@class AWEIMMessageConversation, AWEIMMessage, AWEIMUserViewModel, AWEIMGroupParticipantBizInfoPeerViewModel, AWEIMMessageViewModel, NSMapTable, NSString;
@protocol AWEIMReusableCell, IESIMMessageCellComponentConfigProtocol;

@interface AWEIMMessageComponentContext : AWEIMComponentContext <AWEIMComponentPerfTracker, AWEIMFlexComponentCtxProtocol, AWEIMMessageConponentContextProtocol>

@property (weak, nonatomic) AWEIMMessage *message;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) AWEIMMessageViewModel *messageViewModel;
@property (retain, nonatomic) AWEIMUserViewModel *fromUserViewModel;
@property (retain, nonatomic) AWEIMGroupParticipantBizInfoPeerViewModel *bizInfoViewModel;
@property (nonatomic) BOOL isMessageGathered;
@property (nonatomic) unsigned long long updateOption;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubblePadding;
@property (weak, nonatomic) id<AWEIMReusableCell> attachCell;
@property (retain, nonatomic) NSMapTable *containerPresenters;
@property (readonly, nonatomic) id<IESIMMessageCellComponentConfigProtocol> msgComponentConfig;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasBackgroundImg;
@property (nonatomic) BOOL backgroundIsBright;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferToProfile:(id)a0 secUserID:(id)a1 additionalParams:(id)a2;
- (void)transferToAwemeDetail:(id)a0 params:(id)a1;
- (id)dynamicTextColorWhileChatHasBackgroundImage;
- (void)transferToProfile:(id)a0 additionalParams:(id)a1;
- (void)makeVibrate;
- (BOOL)groupInteractiveCheck;
- (BOOL)enableTrackPerfMetrics;
- (void)trackPerfMetrics:(double)a0 compClass:(Class)a1 invocationSelector:(SEL)a2;
- (id)renderHolder;
- (void)p_fetchUserIfNeedWithFromUserViewModel:(id)a0;
- (void)p_kvoMessageGathered:(id)a0;
- (void)p_kvoConversationMultiSelectStateUpdate:(id)a0;
- (void)p_kvoConversationSyncedExt:(id)a0;
- (void)p_kvoHostViewControllerFrameChanged;
- (void)p_resetSeletedStateWith:(id)a0;
- (id)p_secUserIDForUserID:(id)a0;
- (void)p_updateComponentOnScreenWithOption:(unsigned long long)a0;
- (void)setupWithMessageViewModel:(id)a0 conversation:(id)a1;
- (void)noti_chatBackgroundDidChangeNty:(id)a0;
- (void)noti_themeDidChange:(id)a0;
- (void)transferToPrivateChatAIBotPanelWitUserID:(id)a0 additionalParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
