@class NSString, NSMutableArray, WCAddressNetworkHelper;

@interface WCAddressLogicMgr : MMUserService <MMServiceProtocol, WCAddressNetworkDelegate, MMPackageDownloadMgrExt, MMResourceMgrExt> {
    NSMutableArray *m_arrAddress;
    NSMutableArray *m_arrAddressStageData;
    unsigned int m_retainCount;
    unsigned int currentVersion;
    WCAddressNetworkHelper *m_networkHelper;
    unsigned int m_timeStamp;
    unsigned long long m_uiWCAddressGetAddressStategy;
    unsigned long long m_uiWCAddressDownloadType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)GetRcptInfoNode:(id)a0;
- (BOOL)GetAddressDataFromPath:(id)a0 Error:(id *)a1;
- (BOOL)GetFourStageAddressDataFromPath:(id)a0 Error:(id *)a1;
- (BOOL)safeArchiveAddress;
- (BOOL)isCachedAddress;
- (id)safeGetAddress;
- (void)removeArchiveAddress;
- (BOOL)isImportYiXunAddress;
- (void)setHadImportYiXunAddress;
- (void)importYiXunAdress;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)StartWCAddressService;
- (void)StopWCAddressService;
- (void)GetLatestAddress:(id)a0;
- (void)AddAddress:(id)a0;
- (void)DelAddress:(id)a0;
- (void)ModifyAddress:(id)a0;
- (void)AnalysicAddressInfo:(id)a0;
- (void)GetAllAddress:(id)a0;
- (id)GetRecentlyUsedAddress;
- (void)SetRecentlyUsedAddress:(id)a0;
- (BOOL)GetServerRequestToAddressStageData:(id)a0 andType:(unsigned long long)a1;
- (BOOL)GetAllAddressStageData;
- (BOOL)getAllAddressFourStageData;
- (void)OnAddWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnRemoveWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)HandleGetAddressStategy:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnQueryWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnModifyWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnSelectWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnImportWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)OnAnalyseWCAddress:(id)a0 Request:(id)a1 Error:(id)a2;
- (void)onPackageListUpdated:(id)a0;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)onPackageDownloadProcessUpdated:(id)a0 downloadSize:(int)a1 totalSize:(int)a2;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void).cxx_destruct;

@end
