@class _LVDraftPayloadCategory, NSString;

@interface LVDraftPayload : NSObject <LVCopying> {
    struct shared_ptr<CutSame::Material> { struct Material *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftPayloadCategory *fatherPackage;
@property (copy, nonatomic) NSString *payloadID;
@property (nonatomic) unsigned long long realType;
@property (readonly, nonatomic) unsigned long long genericType;
@property (copy, nonatomic) NSString *rootPath;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) unsigned char canReplace;
@property (nonatomic) unsigned long long platformSupport;
@property (nonatomic) NSString *relationVideoGroup;
@property (copy, nonatomic) NSString *payloadID;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *type;

+ (id)instanceWithCPPModel:(struct shared_ptr<CutSame::Material> { struct Material *x0; struct __shared_weak_count *x1; })a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Material> { struct Material *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::Material> { struct Material *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 payloadID:(id)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Material> { struct Material *x0; struct __shared_weak_count *x1; })a0;
- (void)makeCopyOfClass:(Class)a0 withObj:(id)a1;
- (void)copyCategoryToNewObject_lv:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id).cxx_construct;
- (void)setNilValueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
