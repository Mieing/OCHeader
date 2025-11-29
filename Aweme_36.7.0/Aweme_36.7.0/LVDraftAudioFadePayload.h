@interface LVDraftAudioFadePayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) float fadeInDuration;
@property (nonatomic) float fadeOutDuration;
@property (nonatomic) double fadeIndeOffset;
@property (nonatomic) long long fadeInDurationMilliSeconds;
@property (nonatomic) long long fadeOutDurationMilliSeconds;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (id)initWithFadeInDuration:(float)a0 fadeOutDuration:(float)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
