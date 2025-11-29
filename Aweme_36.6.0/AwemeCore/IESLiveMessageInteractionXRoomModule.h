@class NSString;

@interface IESLiveMessageInteractionXRoomModule : IESLiveModule <IESLiveMessageInteractionXRoomModule>

@property (nonatomic) BOOL enableAutoPlay;
@property (nonatomic) BOOL enableAudioChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userEnterInterface;
- (id)pinCommentInterface;
- (id)actionSheetInterface;
- (id)fixedCardInterface;
- (id)itemShareInterface;
- (id)commentEntryInterface;
- (id)voiceInterface;
- (BOOL)disableVoiceInput;
- (void)addTrayWithBusinessConfigure:(id)a0;
- (void)enableMessageListShowAndRefresh:(BOOL)a0;
- (void)showMessageContanier:(BOOL)a0 bizScene:(long long)a1;
- (BOOL)getGiftMaskViewStatus;
- (void)notifyGiftMaskView;
- (void)fadeInSideMessageArea;
- (void)fadeOutSideMessageArea;
- (void)adjustTopMaskHeight:(double)a0 bizScene:(id)a1;
- (BOOL)isHighValueAreaMoveDownScene;
- (void)degradeTableViewAnimationForClear:(BOOL)a0;
- (id)currentPublicScreenInfoModel;
- (void)focusOnPublicScreenWithType:(unsigned long long)a0;
- (double)currentPublicScreenTopContainerHeight;
- (void)removePublicScreenWithPublicScreenType:(unsigned long long)a0;
- (void)adjustCurrentScrollContentIfImmediately:(BOOL)a0;
- (void)setPublicScreenCollectionViewScrollEnabledForce:(BOOL)a0;
- (void)disappearMatchHotTray:(id)a0;
- (id)currentRefreshConfig;
- (void)addPublicScreen:(id)a0 withInfoModel:(id)a1 shouldFocus:(BOOL)a2 animated:(BOOL)a3;
- (Class)commentEmoticonEmojiPageCellClz;
- (BOOL)setCommentEmoticonTracker:(id)a0 delegate:(id)a1 cell:(id)a2;
- (BOOL)commentStructureConfigFull;

@end
