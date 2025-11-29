@class NSString, AWEStickerHintView, AWEVideoPublishViewModel;

@interface AWEStickerApplyHintHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) AWEStickerHintView *stickerHintView;
@property (nonatomic) BOOL needCheckPropHintShow;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddFragment:(id)a0;
- (BOOL)getShowComplianceToastCount;
- (void)markComplianceToastCount;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)p_resetStickerHintView;
- (void)checkPropNeedShowHintToast:(id)a0 propSource:(long long)a1;
- (BOOL)p_shouldShowPhotoSensitiveHint:(id)a0;
- (void)p_showPhotoSensitiveHint:(id)a0;
- (void)p_showPropHintViewIfNeed:(id)a0;
- (void).cxx_destruct;

@end
