@class NSString;

@interface AFDStoryDiverseDiggService : HTSService <AFDStoryDiverseDiggService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowDiverseDiggShareBtnWithModel:(id)a0;
- (BOOL)canShowDiverseDiggSendMsgInputViewWithModel:(id)a0;
- (BOOL)canShowDiverseDiggEmojiBtnWithModel:(id)a0;
- (BOOL)canShowDiverseDiggElementWithModel:(id)a0;
- (BOOL)canShowNormalDiggBtnWithStory:(id)a0;
- (BOOL)canShowDiverseDiggBottomBarWithModel:(id)a0;
- (BOOL)canShowDiverseDiggNormalLikeBtnWithModel:(id)a0 context:(id)a1;
- (BOOL)shouldShareBtnMoveToTopWithModel:(id)a0;
- (BOOL)canResponseDoubleClickLikeEventWithModel:(id)a0;
- (BOOL)canShowStory25ViewerListBottomBarWithModel:(id)a0;
- (BOOL)canShowStory25ViewedViewerGuideAnimationWithModel:(id)a0;
- (id)story25ViewedViewerGuideAnimationWithDelegate:(id)a0;
- (void)clearGuideAnimationFrequencyControl;
- (BOOL)canShowStory25ViewerListWithModel:(id)a0;
- (BOOL)isDiverseDiggConsumeEnable;
- (id)diverseDiggImageWithText:(id)a0;
- (id)diverseDiggAnimationURLWithActionID:(id)a0;
- (id)diverseDiggProduceABConfig;
- (BOOL)useNewPermissionWithModel:(id)a0;
- (BOOL)canInteractWithUser:(id)a0 usingNewPermission:(BOOL)a1;
- (BOOL)isBasicConditionEnableWithModel:(id)a0;
- (id)downgradeImageNameWithText:(id)a0;

@end
