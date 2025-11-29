@protocol ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCStickerGestureComponentProtocol, ACCEditPicTemplateServiceProtocol;

@interface AWEGenericTemplateApplyStickersHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)onDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void)onTemplateApply:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)onTemplateApplyDidFirstRender:(id)a0 config:(id)a1;
- (void)onTemplateWillRemoveWithID:(id)a0 config:(id)a1;
- (void)onTemplateDidRemoveWithID:(id)a0 config:(id)a1 trackChangeInfo:(id)a2;
- (void)onTemplateRemovedWithID:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)resetPipContainerAtIndex:(long long)a0;
- (void)assignPipContainerAtIndex:(long long)a0 workspace:(id)a1;
- (void).cxx_destruct;

@end
