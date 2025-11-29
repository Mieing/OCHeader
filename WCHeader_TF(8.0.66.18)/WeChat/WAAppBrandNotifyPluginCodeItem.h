@class NSString, NSArray;

@interface WAAppBrandNotifyPluginCodeItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *provider;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *prefixPath;
@property (retain, nonatomic) NSArray *contextsList;
@property (nonatomic) BOOL autoUpdate;
@property (nonatomic) unsigned int debugDevKey;
@property (retain, nonatomic) NSString *versionDesc;
@property (retain, nonatomic) NSString *semver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_provider;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_prefixPath;
+ (void)PBArrayAdd_contextsList;
+ (void)PBArrayAdd_autoUpdate;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_versionDesc;
+ (void)PBArrayAdd_semver;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
