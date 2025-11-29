@class NSRecursiveLock, NSMutableDictionary, NSString, EmoticonDataDB, EmoticonSortSetting;

@interface EmoticonPackageMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *m_oLock;
@property (retain, nonatomic) EmoticonDataDB *m_oEmoticonPackageDB;
@property (retain, nonatomic) EmoticonSortSetting *m_sortSetting;
@property (retain) NSMutableDictionary *m_packageDownloadStatusCacheDic;
@property (nonatomic) BOOL isInstallingTusiji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)packageImageFromLightModeName:(id)a0 darkModeName:(id)a1 style:(unsigned long long)a2;
+ (id)getEmoticonPackageImageByPid:(id)a0 style:(unsigned long long)a1;

- (id)init;
- (void)onServiceInit;
- (BOOL)updateCacheDownloadStatusForPid:(id)a0;
- (BOOL)isDBStatusDownloadedForPid:(id)a0;
- (BOOL)isCacheStatusDownloadedForPid:(id)a0;
- (void)setIPMergeTipsShowStatusTo:(BOOL)a0;
- (BOOL)isIPMergeTipsShowed;
- (void)setIPMergeEnabledTo:(BOOL)a0;
- (BOOL)isIPMergeEnabled;
- (void)initLocalList;
- (void)hardcodeTusiji;
- (void)HardcodePackage;
- (void)tryInstallTusiji;
- (BOOL)addEmoticonPackage:(id)a0 name:(id)a1 payStatus:(unsigned int)a2 downloadStatus:(unsigned int)a3 iconUrl:(id)a4;
- (BOOL)addEmoticonPackageSilently:(id)a0 name:(id)a1 iconUrl:(id)a2 payStatus:(unsigned int)a3 downloadStatus:(unsigned int)a4;
- (BOOL)deleteEmoticonPackageWithoutUploadByPid:(id)a0;
- (BOOL)deleteEmoticonSilentlyByPid:(id)a0 needRemoveFile:(BOOL)a1;
- (BOOL)update:(id)a0 payStatus:(unsigned int)a1;
- (BOOL)update:(id)a0 count:(unsigned int)a1;
- (BOOL)update:(id)a0 designerUin:(id)a1;
- (BOOL)update:(id)a0 designerIPSetKey:(id)a1;
- (void)notifyPackageListChangedWithPid:(id)a0;
- (BOOL)updateSilently:(id)a0 downloadStatus:(unsigned int)a1;
- (BOOL)updateSilently:(id)a0 count:(unsigned int)a1;
- (id)getEmoticonPackageList;
- (id)getCustomPackage;
- (id)getCameraPackage;
- (id)getTusijiPackage;
- (void)saveSort:(id)a0;
- (id)getSortEmoticonPackageListWithTusiji:(BOOL)a0 withCustom:(BOOL)a1;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getDistinctDesignerUin;
- (id)getNeedUpdateDesignerPids;
- (id)getDesignerPids:(id)a0;
- (id)getDesignerUin:(id)a0;
- (id)getDesignerIPSetKey:(id)a0;
- (BOOL)isUserFollowingDesigner:(id)a0;
- (BOOL)isEmoticonPackagePurchased:(id)a0;
- (BOOL)isEmoticonPackageDownLoaded:(id)a0;
- (BOOL)unzipPackageAtPath:(id)a0 withPid:(id)a1 count:(unsigned long long *)a2;
- (BOOL)installDirPath:(id)a0 pid:(id)a1 count:(unsigned long long *)a2;
- (BOOL)installPackageAtPath:(id)a0 withName:(id)a1 withPid:(id)a2 iconUrl:(id)a3;
- (BOOL)addPackageList:(id)a0;
- (id)PreProcessServerUpdateList:(id)a0;
- (void).cxx_destruct;

@end
