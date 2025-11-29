@class IESLiveCommentEntryContainer, NSMutableDictionary, IESLiveCommentEntryStore, NSString;

@interface IESLiveCommentEntryFragment : IESLiveRoomComponent <IESLiveCommentEntryRouter, IESLivePublicScreenLifeCircleAction, IESLiveCommentEntryReactions, IESLiveMessageInteractionModuleCommentAction, IESLiveMessageInteractionModuleVoiceAction, IESLiveChatChannelAction, IESLiveByteCastAction, IESLiveCommentEntryViewDelegate>

@property (retain, nonatomic) IESLiveCommentEntryStore *store;
@property (retain, nonatomic) IESLiveCommentEntryContainer *commentEntryContainer;
@property (retain, nonatomic) NSMutableDictionary *commentEntrys;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL componentHide;
@property (retain, nonatomic) NSMutableDictionary *monitorParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentRefresh;
- (void)subscribeEmoticonDidSend:(long long)a0 error:(id)a1 duration:(double)a2 commentEnterSource:(long long)a3;
- (void)onCommentSucceed:(id)a0 fromEnterSource:(long long)a1;
- (void)handleOrientationChanged:(long long)a0;
- (void)publicScreenWillAppearWithInfoModel:(id)a0;
- (void)updateCommentButtonWithOrientationIfNeeded;
- (void)trackOutterEmojiShow;
- (void)showCommentEntry;
- (void)hideCommentEntry;
- (BOOL)isDanmakuClosed;
- (void)setIsDanmakuClosedStatus:(BOOL)a0;
- (id)currentCommentEntryType;
- (void)commentEntryView:(id)a0 didClickArea:(long long)a1;
- (void)willSupportCastDanmaku:(BOOL)a0;
- (void)willStopSupportCastDanmaku;
- (id)currentCommentEntry;
- (void)sendVoiceMessageSucceed:(id)a0;
- (void)loadCommentEntry;
- (void)addUnmountMonitorParams;
- (void)moniterCommentEntryFinalState;
- (void)trackCommentEntryShowWithText:(id)a0;
- (void)setCommentEntryHide:(BOOL)a0 reason:(id)a1;
- (BOOL)checkUpdateCommentEntryContainerEnableShow;
- (void)refreshCommentEntry;
- (id)commentEntryViewTypeShouldMount;
- (id)commentEntryForViewType:(id)a0;
- (void)monitorCommentEntryLoadState;
- (void)setCommentEntryAlpha:(double)a0 enableAnimation:(BOOL)a1 reason:(id)a2;
- (void)logCommentEntryStatusDidChangedReason:(id)a0;
- (BOOL)shouldRefreshWhileBindTypeChanged;
- (void)updateLowPcuGuideHint;
- (void)hideLowPcuGuideHint;
- (void)commentDisableStateDidChange:(BOOL)a0;
- (void)enableUseCommentEntry:(BOOL)a0;
- (void).cxx_destruct;

@end
