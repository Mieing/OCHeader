@class NSString;

@interface MJShootComposingDraft : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long maasSDKVersion;
@property (retain, nonatomic) NSString *aigcTaskID;
@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSString *coverImageFilePath;
@property (retain, nonatomic) NSString *clipbundleDirID;
@property (nonatomic) long long entryScene;
@property (nonatomic) unsigned long long draftType;
@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) NSString *phAssetID;
@property (nonatomic) BOOL isAIGCTaskCompleted;
@property (nonatomic) double creationTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_aigcTaskID;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_coverImageFilePath;
+ (void)PBArrayAdd_clipbundleDirID;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_draftType;
+ (void)PBArrayAdd_cameraPosition;
+ (void)PBArrayAdd_phAssetID;
+ (void)PBArrayAdd_isAIGCTaskCompleted;
+ (void)PBArrayAdd_creationTimeInterval;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)prepareBeforePBCodingIfNeeded;
- (BOOL)restoreAfterPBCodingIfNeeded;
- (BOOL)isMaasSDKVersionCompatible;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
