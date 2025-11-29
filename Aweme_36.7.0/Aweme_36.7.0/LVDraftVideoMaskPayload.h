@class NSString, LVVideoMaskConfig;

@interface LVDraftVideoMaskPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialMask> { struct MaterialMask *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) LVVideoMaskConfig *config;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *resourceTypePrivate;

+ (id)resourceTypeStringFromType:(unsigned long long)a0;
+ (unsigned long long)resourceTypeFromString:(id)a0;
+ (id)resourceTypeMapper;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialMask> { struct MaterialMask *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::MaterialMask> { struct MaterialMask *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialMask> { struct MaterialMask *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithType:(unsigned long long)a0 resourceID:(id)a1 rootPath:(id)a2 path:(id)a3 name:(id)a4 resourceType:(unsigned long long)a5 platformSupport:(unsigned long long)a6 resourceMD5:(id)a7;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)absolutePath;

@end
