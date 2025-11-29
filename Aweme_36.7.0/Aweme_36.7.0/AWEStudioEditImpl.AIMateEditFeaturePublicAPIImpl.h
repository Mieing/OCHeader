@interface AWEStudioEditImpl.AIMateEditFeaturePublicAPIImpl : NSObject <AWEStudioAIMateEditFeaturePublicAPI> {
    void /* unknown type, empty encoding */ context;
}

- (void)updateCapsuleShowState;
- (BOOL)supportAIMateEdit;
- (BOOL)showAIMateCapsule;
- (BOOL)aiMateCapsuleIsAnimating;
- (id)aiMateEditTaskStatus;
- (BOOL)supportEffectPanel;
- (void)runMainTaskModel:(id)a0;
- (id)aiMateEditDidCompleteBind;
- (id)replaceTemplateTrackBind;
- (id)removeCurrentTemplateBind;
- (id)aiMateEditTaskWillStartBind;
- (id)aiMateEditTaskDidEndBind;
- (id)aiMateBubbleDidClick;
- (void)startAIGenStickersFlowWithDataModels:(id)a0;
- (void)cancelAIGenStickersFlow;
- (void)syncAIGenStickersTTSTimeline;
- (void)removeAIGenStickers;
- (void)changeStatusToBall;
- (void)changeStatusToCapsule;
- (BOOL)willShowGuideBubble;
- (BOOL)isInAIMateSecondaryPage;
- (id)copyCapsuleView;
- (void).cxx_destruct;
- (id)init;
- (id)capsuleView;

@end
