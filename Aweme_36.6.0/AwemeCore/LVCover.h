@class NSString, LVCoverTemplate, LVCoverDraft, LVCoverFrameInfo, LVCoverMaterials, LVCoverImageInfo;

@interface LVCover : NSObject {
    struct shared_ptr<CutSame::Cover> { struct Cover *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVCoverDraft *coverDraft;
@property (retain, nonatomic) LVCoverTemplate *coverTemplate;
@property (retain, nonatomic) LVCoverFrameInfo *frameInfo;
@property (retain, nonatomic) LVCoverImageInfo *imageInfo;
@property (retain, nonatomic) LVCoverMaterials *materials;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) unsigned long long type;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Cover> { struct Cover *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Cover> { struct Cover *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Cover> { struct Cover *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
