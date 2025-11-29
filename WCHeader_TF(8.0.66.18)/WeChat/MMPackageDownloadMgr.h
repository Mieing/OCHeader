@class NSString, NSMutableSet, NSDateFormatter;

@interface MMPackageDownloadMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt> {
    NSMutableSet *m_downliadingPackageLists;
    NSMutableSet *m_freshDownliadingPackageLists;
    NSMutableSet *m_downloadingPackages;
    NSMutableSet *m_cancelDownloadPackages;
    NSDateFormatter *m_dateFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPackageListPath:(id)a0;
- (id)getPackageBasePath:(id)a0 tid:(id)a1;
- (id)getPackageCachePath:(id)a0 tid:(id)a1;
- (id)getPackageIconPath:(id)a0 tid:(id)a1;
- (id)LoadPackageListArchive:(id)a0;
- (void)SavePackageListArchive:(id)a0 packageListArchive:(id)a1;
- (id)getPackageList:(unsigned int)a0;
- (void)downloadPackageList:(unsigned int)a0 fresh:(BOOL)a1 onlyForTid:(id)a2;
- (void)downloadPackageList:(unsigned int)a0;
- (void)downloadPackageList:(unsigned int)a0 onlyForTid:(id)a1;
- (void)onPackageListSynced:(id)a0;
- (BOOL)downloadPackage:(unsigned int)a0 tid:(id)a1 localVersion:(id)a2;
- (void)onPackageSynced:(id)a0;
- (void)cancelPackage:(unsigned int)a0 tid:(id)a1;
- (void)deletePackage:(unsigned int)a0 tid:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
