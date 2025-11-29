@class NSString, NSArray;

@interface LVCoverTemplate : NSObject {
    struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *coverTemplateCategory;
@property (copy, nonatomic) NSString *coverTemplateCategoryID;
@property (copy, nonatomic) NSString *coverTemplateID;
@property (copy, nonatomic) NSArray *coverTemplateMaterialIds;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
