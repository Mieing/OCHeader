@protocol AWEVideoCoverEditorCanvasMoveServiceProtocol;

@interface AWEGenericTemplateApplyVideoCoverHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<AWEVideoCoverEditorCanvasMoveServiceProtocol> canvasMoveService;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)onDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void).cxx_destruct;

@end
