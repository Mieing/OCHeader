@class NSDictionary, NSString, NSArray;

@interface LVMutableConfig : NSObject <LVCopying> {
    struct shared_ptr<CutSame::MutableConfig> { struct MutableConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long alignMode;
@property (readonly, nonatomic) NSDictionary *mutableInfoDict;
@property (copy, nonatomic) NSString *alignModeString;
@property (copy, nonatomic) NSArray *mutableInfos;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MutableConfig> { struct MutableConfig *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MutableConfig> { struct MutableConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MutableConfig> { struct MutableConfig *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
