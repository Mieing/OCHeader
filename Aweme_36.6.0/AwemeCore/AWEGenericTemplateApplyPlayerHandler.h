@protocol ACCSequenceEditServiceProtocol;

@interface AWEGenericTemplateApplyPlayerHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)onDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void)onTemplateApply:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)onTemplateApplyDidFirstRender:(id)a0 config:(id)a1;
- (void)onTemplateRemovedWithID:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)refreshMediaContainerView;
- (void).cxx_destruct;

@end
