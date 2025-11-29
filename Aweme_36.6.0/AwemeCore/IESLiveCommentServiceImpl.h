@class HTSLiveChatInputPanel, NSString, NSMutableArray, IESLiveCommentStructurePanelConfig;
@protocol IESLiveCommentServiceInjector;

@interface IESLiveCommentServiceImpl : IESLiveGeneralBaseService <IESLiveCommentService, IESLiveCommentExpandEntryService, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (retain, nonatomic) NSMutableArray *registeredExpandEntryItems;
@property (retain, nonatomic) IESLiveCommentStructurePanelConfig *panelConfigForOnce;
@property (retain, nonatomic) id<IESLiveCommentServiceInjector> injector;
@property (nonatomic, getter=commentForbidden) BOOL isForbidden;
@property (nonatomic) BOOL commentInterflowOpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveChatInputPanel *chatInputPanelInfo;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)hideCommentView;
- (void)sendSubscribeEmoji:(long long)a0 enterSource:(long long)a1 requestSource:(id)a2 trackParasm:(id)a3 completion:(id /* block */)a4;
- (void)bindInjector:(id)a0;
- (void)showCommentViewWithEnterSource:(long long)a0;
- (void)sendBarrage:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)showCommentPanelWithConfig:(id)a0;
- (void)sendComment:(id)a0 enterSource:(long long)a1 requestSource:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)sendBarrage:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)sendChannelInteractiveEmojiWithDisplayName:(id)a0 interactiveEmojiID:(id)a1 channelID:(id)a2 completion:(id /* block */)a3;
- (void)hideCommentSuggestion;
- (void)showCommentSuggestionIfNeeded;
- (void)commentForbiddenStateDidChange:(BOOL)a0;
- (BOOL)commentPrepared;
- (void)showCommentPopupViewWithContent:(id)a0 preferredHeight:(double)a1 onExpandEntryType:(unsigned long long)a2;
- (void)registerExpandEntryWithItem:(id)a0;
- (BOOL)isCommentInterflow;
- (void)injectorReady;
- (void)checkIfNeedShowCommentPanel;
- (void)sendSubscribeEmoji:(long long)a0 enterSource:(long long)a1 requestSource:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (void)messageReceived:(id)a0;

@end
