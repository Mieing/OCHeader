@class NSString, NSMutableDictionary, NSDictionary, Package;

@interface MMPerformanceDataReportMgr : MMRootService <MMResourceMgrExt, MMServiceProtocol, MMPackageDownloadMgrExt, MMKernelExt> {
    NSMutableDictionary *m_dicCostTimeItems;
    NSMutableDictionary *m_dicCostMemoryItems;
    NSDictionary *m_dicCostTimeReportIdKey;
    NSDictionary *m_dicCostMemoryReportIdKey;
    Package *m_packageDownload;
    unsigned long long m_uAllTotalCostTimeKey;
    unsigned long long m_uAllTotalCountKey;
    NSString *m_nsAllDes;
    unsigned long long m_uDeviceTotalCostTimeKey;
    unsigned long long m_uDeviceTotalCountKey;
    NSString *m_nsDeviceDes;
    BOOL m_bActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)willSuspend;
- (void)didBecomeActive;
- (void)stop;
- (void)start;
- (void)registerExtension;
- (void)startLogPerformanceData:(unsigned long long)a0 onCase:(unsigned long long)a1 withTag:(id)a2;
- (void)endLogPerformanceData:(unsigned long long)a0 onCase:(unsigned long long)a1 withTag:(id)a2;
- (void)setCurrentTimeOnCase:(unsigned long long)a0 withTag:(id)a1;
- (void)setCurrentMemoryOnCase:(unsigned long long)a0 withTag:(id)a1;
- (void)reportCostTimeOnKey:(id)a0;
- (void)reportCostMemoryOnKey:(id)a0;
- (void)reportCostTimeToIdKey:(unsigned int)a0 caseID:(unsigned long long)a1;
- (void)reportCostMemoryToIdKey:(unsigned int)a0 caseID:(unsigned long long)a1;
- (void)reportCostData:(unsigned int)a0 ToCaseId:(unsigned long long)a1;
- (void)reportCostData:(unsigned int)a0 ToIdKey:(unsigned int)a1 ToKeyRange:(id)a2 ToRange:(id)a3;
- (void)reportCostData:(unsigned int)a0 ToIdKey:(unsigned int)a1 ToMainKey:(unsigned int)a2 ToKeyRange:(id)a3 ToRange:(id)a4;
- (id)getReportIdKeyEx:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)getKeyInfo:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)loadIdKeyInfo;
- (id)getIdKeyContent;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void).cxx_destruct;

@end
