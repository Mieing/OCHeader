@class NSString;

@interface NLEResourceNode_OC : NLENode_OC

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL acc_isPrivate;
@property (nonatomic) BOOL acc_isNetworkUrl;
@property (copy, nonatomic) NSString *acc_draftFolder;
@property (retain, nonatomic) NSString *aek_resourceId;
@property (copy, nonatomic) NSString *dve_iconUrlStr;
@property (nonatomic) struct shared_ptr<cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *resourceFile;
@property (copy, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long resourceTag;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) BOOL necessary;

+ (id)resourceTypeConvertToStr:(unsigned long long)a0;
+ (id)p_newFilePathIfNeedWithURL:(id)a0 dirPath:(id)a1 isMove:(BOOL *)a2;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })a0;
- (id)acc_path;
- (void)acc_setGlobalResouceWithPath:(id)a0;
- (BOOL)acc_movePrivateResourceToDraftFolder:(id)a0;
- (void)acc_setPrivateResouceWithURL:(id)a0 draftFolder:(id)a1;
- (void)setAcc_path:(id)a0 draftFolder:(id)a1;
- (id)acc_pathURL;
- (BOOL)isRelatedPath:(id)a0;
- (void)acc_fixSandboxDirWithDraftFolder:(id)a0;
- (id)init;

@end
