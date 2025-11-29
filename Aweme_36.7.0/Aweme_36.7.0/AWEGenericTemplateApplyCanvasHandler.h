@protocol ACCSequenceEditServiceProtocol, ACCEditorRecoverServiceProtocol;

@interface AWEGenericTemplateApplyCanvasHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)onDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void)onTemplateApply:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)onTemplateApplyDidFirstRender:(id)a0 config:(id)a1;
- (void)onTemplateApplyDidSeekToStart:(id)a0 config:(id)a1;
- (void)onTemplateDidRemoveWithID:(id)a0 config:(id)a1 trackChangeInfo:(id)a2;
- (void)onTemplateRemovedWithID:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)updateVideoTemplateCanvasForSideSlipWithPublishModel:(id)a0 shouldDoStickersRecover:(BOOL)a1;
- (void)updateVideoTemplateCanvasForOneClickFilmWithRepository:(id)a0 shouldDoStickersRecover:(BOOL)a1 shouldRemoveEmbeddedSticker:(BOOL)a2;
- (BOOL)hasBrushStickerSlotWithPublishModel:(id)a0;
- (void).cxx_destruct;

@end
