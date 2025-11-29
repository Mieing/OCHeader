@interface AWEKnowledgeRichContentImpl.KnowledgeRichAwemeServiceImpl : HTSService <AWEKnowledgeRichAwemeService>

- (id)richAwemeSmartBGColorWithImage:(id)a0;
- (id)getCustomInfoElementViewController;
- (Class)getCustomInfoElementViewControllerClass;
- (id)getDescriptionElementViewController;
- (Class)getDescriptionElementViewControllerClass;
- (id)getButtonElementViewController;
- (id)getGoodsProgressElementViewController;
- (Class)getGoodsProgressElementViewControllerClass;
- (id)createPinchZoomWrapperView;
- (id)createPinchZoomOutNonInteractedTransitionAlbumAnimator;
- (id)createPinchUpdateKeepScaleAnimator;
- (id)createPureModeFullscreenModeSwitcherWithViewController:(id)a0;
- (id)createPureModePinchKeepScaleGuideManager;
- (BOOL)cellBackgroundNeedSmartColorWithModel:(id)a0 referString:(id)a1;
- (BOOL)judgeGradientCalculateColorEnableWithAwemeModel:(id)a0 referString:(id)a1;
- (id)richAwemeSmartBGColorForLynxWithImage:(id)a0;
- (BOOL)shouldUseMultiContentContainerWithAlbumModel:(id)a0 referString:(id)a1 isPureMode:(BOOL)a2;
- (BOOL)enableDelayColdStartAlbumInteraction:(id)a0;
- (BOOL)enableDelayAddAlbumInteraction:(id)a0 referString:(id)a1;
- (BOOL)richAwemeShouldAutoPlayWithModel:(id)a0 refering:(id)a1 shieldSearchForce:(BOOL)a2 logExtraDict:(id)a3;
- (long long)progressViewTypeEnhanceWithModel:(id)a0 enterModel:(id)a1 refering:(id)a2 logExtraDict:(id)a3 manuallyScrollForce:(BOOL)a4;
- (BOOL)progressContainerChangedSenceWithModel:(id)a0;
- (Class)inspirationBottomControllerClass;
- (BOOL)shouldFeedNoteLongTextAdjustActive:(id)a0;
- (void)trackEndMultiPhotoConsume:(id)a0 enterFrom:(id)a1 videoController:(id)a2 scene:(unsigned long long)a3;
- (void)recordLogWithType:(unsigned long long)a0 subModule:(id)a1 message:(id)a2 fileName:(id)a3 lineNumber:(long long)a4 funcName:(id)a5;
- (BOOL)albumEnableFastPlay:(id)a0 referString:(id)a1;
- (long long)progressViewNewTypeWithModel:(id)a0 referString:(id)a1 isPureMode:(BOOL)a2 logExtraDict:(id)a3 defaultPlayMode:(unsigned long long)a4;
- (BOOL)progressContainerIsVisiableWithModel:(id)a0 progressType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
