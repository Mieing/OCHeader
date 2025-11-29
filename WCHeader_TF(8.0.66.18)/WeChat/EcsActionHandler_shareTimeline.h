@class NSString;

@interface EcsActionHandler_shareTimeline : EcsActionHandler_Base <EcsShareTimelineResultDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAction:(id)a0;
- (void)shareTimeline:(id)a0;
- (id)testJumpInfoBase64;
- (void)onFailWithErrMsg:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)onCancelCommitForCommitView:(id)a0 isSaveDraft:(BOOL)a1;
- (void)onDoneCommitForCommitView:(id)a0;

@end
