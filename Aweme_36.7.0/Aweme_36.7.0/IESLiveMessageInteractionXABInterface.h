@interface IESLiveMessageInteractionXABInterface : NSObject

+ (id)itemShareInterfaceWithDiContext:(id)a0;
+ (BOOL)isHighValueAreaMoveDownSceneWithDiContext:(id)a0;
+ (void)showMessageContanier:(BOOL)a0 bizScene:(long long)a1 diContext:(id)a2;
+ (void)focusOnPublicScreenWithType:(unsigned long long)a0 diContext:(id)a1;
+ (id)userEnterInterfaceWithDiContext:(id)a0;
+ (void)degradeTableViewAnimationForClear:(BOOL)a0 diContext:(id)a1;
+ (id)currentPublicScreenInfoModelWithDiContext:(id)a0;
+ (void)enableMessageListShowAndRefresh:(BOOL)a0 diContext:(id)a1;
+ (void)setPublicScreenCollectionViewScrollEnabledForce:(BOOL)a0 diContext:(id)a1;
+ (void)addPublicScreen:(id)a0 withInfoModel:(id)a1 shouldFocus:(BOOL)a2 animated:(BOOL)a3 diContext:(id)a4;
+ (void)removePublicScreenWithPublicScreenType:(unsigned long long)a0 diContext:(id)a1;
+ (void)adjustCurrentScrollContentIfImmediately:(BOOL)a0 diContext:(id)a1;
+ (id)commentEntryInterfaceWithDiContext:(id)a0;
+ (id)fixedCardInterfaceWithDiContext:(id)a0;
+ (id)currentRefreshConfigWithDiContext:(id)a0;
+ (id)pinCommentInterfaceWithDiContext:(id)a0;
+ (id)actionSheetInterfaceWithDiContext:(id)a0;
+ (id)voiceInterfaceWithDiContext:(id)a0;
+ (void)addTrayWithBusinessConfigure:(id)a0 diContext:(id)a1;
+ (BOOL)getGiftMaskViewStatusWithDiContext:(id)a0;
+ (void)notifyGiftMaskViewWithDiContext:(id)a0;
+ (void)adjustTopMaskHeight:(double)a0 bizScene:(id)a1 diContext:(id)a2;
+ (void)setEnableAutoPlay:(BOOL)a0 diContext:(id)a1;
+ (void)setEnableAudioChat:(BOOL)a0 diContext:(id)a1;

@end
