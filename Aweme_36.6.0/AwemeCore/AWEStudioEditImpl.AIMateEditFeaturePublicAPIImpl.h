@interface AWEStudioEditImpl.AIMateEditFeaturePublicAPIImpl : NSObject <AWEStudioAIMateEditFeaturePublicAPI> {
    void /* unknown type, empty encoding */ context;
}

- (id)aiMateEditDidCompleteBind;
- (id)replaceTemplateTrackBind;
- (id)removeCurrentTemplateBind;
- (id)aiMateEditTaskWillStartBind;
- (id)aiMateEditTaskDidEndBind;
- (id)aiMateBubbleDidClick;
- (void)updateCapsuleShowState;
- (BOOL)supportAIMateEdit;
- (BOOL)showAIMateCapsule;
- (BOOL)aiMateCapsuleIsAnimating;
- (id)aiMateEditTaskStatus;
- (BOOL)supportEffectPanel;
- (void)changeStatusToBall;
- (void)changeStatusToCapsule;
- (void)runMainTaskModel:(id)a0;
- (BOOL)willShowGuideBubble;
- (void)startAIGenStickersFlowWithDataModels:(id)a0;
- (void)cancelAIGenStickersFlow;
- (void)syncAIGenStickersTTSTimeline;
- (void)removeAIGenStickers;
- (BOOL)isInAIMateSecondaryPage;
- (id)copyCapsuleView;
- (void).cxx_destruct;
- (id)init;
- (id)capsuleView;

@end
