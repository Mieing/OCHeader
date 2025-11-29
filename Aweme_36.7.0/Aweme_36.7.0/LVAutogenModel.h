@class LVKeyframe, LVVideoPreviewConfig, LVVeConfig, LVTemplateParam, LVMediaDraft, LVVideoSegment, LVTextSegment, LVDraftPayload, LVTimeClipParam, LVDraftEffectTemplatePayload, LVDependencyResource, LVVideoCompileParam, LVTailSegment;

@interface LVAutogenModel : NSObject {
    struct shared_ptr<CutSame::AutogenModel> { struct AutogenModel *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVDependencyResource *dependencyResource;
@property (retain, nonatomic) LVDraftEffectTemplatePayload *effectTemplate;
@property (retain, nonatomic) LVKeyframe *keyframe;
@property (retain, nonatomic) LVDraftPayload *material;
@property (retain, nonatomic) LVTailSegment *tailSegment;
@property (retain, nonatomic) LVMediaDraft *templateModel;
@property (retain, nonatomic) LVTemplateParam *templateParam;
@property (retain, nonatomic) LVTextSegment *textSegment;
@property (retain, nonatomic) LVTimeClipParam *timeClipParam;
@property (retain, nonatomic) LVVeConfig *veConfig;
@property (retain, nonatomic) LVVideoCompileParam *videoCompileParam;
@property (retain, nonatomic) LVVideoPreviewConfig *videoPreviewConfig;
@property (retain, nonatomic) LVVideoSegment *videoSegment;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::AutogenModel> { struct AutogenModel *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::AutogenModel> { struct AutogenModel *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::AutogenModel> { struct AutogenModel *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
