@class NSString, NSArray, NSDictionary;

@interface PTYPackage : NSObject <IESLivePackage, BDPClientAIPackage> {
    struct shared_ptr<pitaya::AlgorithmPackage> { struct AlgorithmPackage *__ptr_; struct __shared_weak_count *__cntrl_; } _core_pack;
    struct shared_ptr<pitaya::PackageInfo> { struct PackageInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _core_pack_info;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *deployment;
@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, nonatomic) unsigned long long from;
@property (readonly, nonatomic) NSString *buildTime;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *deployment;
@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, nonatomic) unsigned long long from;
@property (readonly, nonatomic) NSString *buildTime;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *deployment;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) unsigned long long from;
@property (retain, nonatomic) NSString *buildTime;
@property (retain, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithCorePackage:(const void *)a0;
- (id)initWithPackageInfo:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
