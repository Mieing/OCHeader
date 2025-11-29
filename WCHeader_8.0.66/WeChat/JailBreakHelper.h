@class NSString, NSMutableArray;

@interface JailBreakHelper : NSObject <PBCoding, MMPackageDownloadMgrExt>

@property (nonatomic) unsigned int m_hasCheckPuginTimes;
@property (retain, nonatomic) NSMutableArray *m_checkPaths;
@property (nonatomic) unsigned int m_lastCheckTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_hasCheckPuginTimes;
+ (void)PBArrayAdd_m_checkPaths;
+ (void)PBArrayAdd_m_lastCheckTime;
+ (void)initialize;
+ (BOOL)JailBroken;
+ (id)getJailbreakRootDir;
+ (id)getJailbreakPath;
+ (id)getIAPCheckPath;
+ (id)loadSetting;

- (id)getPBPropertyTable;
- (id)init;
- (id)getKeyStr;
- (BOOL)IsJailBreak;
- (BOOL)HasInstallJailbreakPlugin:(id)a0;
- (BOOL)isOverADay;
- (BOOL)save;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)onPackageDownloadProcessUpdated:(id)a0 downloadSize:(int)a1 totalSize:(int)a2;
- (void)onPackageListUpdated:(id)a0;
- (void).cxx_destruct;

@end
