@class AWEGenericTemplateApplierContext;

@interface AWEGenericTemplateApplyBaseHandler : NSObject

@property (weak, nonatomic) AWEGenericTemplateApplierContext *context;

- (void)onTemplateReplaceSlotWillStart:(id)a0;
- (BOOL)isPicTemplate;
- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)onDidApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 trackChangeInfo:(id)a3 error:(id)a4;
- (void)onTemplateApply:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (void)onTemplateApplyDidFirstRender:(id)a0 config:(id)a1;
- (void)onTemplateApplyDidSeekToStart:(id)a0 config:(id)a1;
- (void)onTemplateWillRemoveWithID:(id)a0 config:(id)a1;
- (void)onTemplateDidRemoveWithID:(id)a0 config:(id)a1 trackChangeInfo:(id)a2;
- (void)onTemplateRemovedWithID:(id)a0 config:(id)a1 didUpdateVideoDataWithTrackChangeInfo:(id)a2 error:(id)a3;
- (BOOL)isVideoTemplate;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
