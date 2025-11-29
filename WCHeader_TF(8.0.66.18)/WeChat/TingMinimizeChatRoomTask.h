@class UILabel, MiniAudioTaskContentView, NSString;

@interface TingMinimizeChatRoomTask : TingMinimizeBaseTask <MiniAudioTaskContentViewDelegate, MMImageLoaderObserver>

@property (retain, nonatomic) MiniAudioTaskContentView *contentView;
@property (nonatomic) BOOL disableOpen;
@property (retain, nonatomic) UILabel *memberCountLabel;
@property (nonatomic) unsigned int memberCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)leftButton;
- (id)taskContainerView;
- (BOOL)canMinimizeBecomeActive:(id)a0;
- (id)getChatRoomPluginService;
- (id)contentDefaultImage;
- (BOOL)isRoomCreatedByMyself;
- (void)updateContentViewIfNeedWithForce:(BOOL)a0;
- (id)currentListenItemCover;
- (void)updateTaskDataBeforeMinimize:(id)a0;
- (BOOL)shouldStopPlayWhenTaskEngagedForReason:(long long)a0;
- (void)updateChatRoomMemberCount:(unsigned int)a0;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMinimizeTaskTerminate;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)setPausedState:(BOOL)a0;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onStateViewPlayPauseBtnClick:(BOOL)a0;
- (void)openTask;
- (void)openChatRoomWithParams:(id)a0;
- (void).cxx_destruct;

@end
