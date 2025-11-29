@interface AWEPublishMultiSplitableCreateModelStage : AWEPublishMultiSplitableBaseStage

- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (BOOL)isMultiSplitStartNet;
- (BOOL)needRunStageForSubTask:(id)a0;
- (void)allStageDidFinished:(id)a0;
- (void)handleOneCreateAwemeSucceed:(id)a0;
- (void)handleOneCreateAwemeFaild:(id)a0;
- (void)updateDraftCoverImageToTargetItem:(id)a0;
- (void)handleAllCreateAwemeFinished:(id)a0;

@end
