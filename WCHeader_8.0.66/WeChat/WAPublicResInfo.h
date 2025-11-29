@class NSString;

@interface WAPublicResInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *pkgDownloadUrl;
@property (retain, nonatomic) NSString *checkSum;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) BOOL bIsForceUpdate;
@property (nonatomic) unsigned int updateScene;
@property (nonatomic) unsigned int updateType;
@property (retain, nonatomic) NSString *pkgPatchUrl;
@property (nonatomic) unsigned int oldVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pkgDownloadUrl;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_bIsForceUpdate;
+ (void)PBArrayAdd_updateScene;
+ (void)PBArrayAdd_updateType;
+ (void)PBArrayAdd_pkgPatchUrl;
+ (void)PBArrayAdd_oldVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
