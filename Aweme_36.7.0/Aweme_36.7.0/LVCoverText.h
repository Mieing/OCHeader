@class LVDraftEffectPayload, LVSegmentClipInfo, LVDraftTextPayload;

@interface LVCoverText : NSObject {
    struct shared_ptr<CutSame::CoverText> { struct CoverText *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVSegmentClipInfo *clip;
@property (retain, nonatomic) LVDraftTextPayload *text;
@property (retain, nonatomic) LVDraftEffectPayload *textEffect;
@property (retain, nonatomic) LVDraftEffectPayload *textShape;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
