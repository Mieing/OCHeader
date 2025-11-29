@class NSString, NSMutableArray;

@interface WCSessionPerformanceService : MMObject <WCAccountSwitchProtocol> {
    NSMutableArray *performanceModels;
    unsigned int pId;
    NSString *pName;
    unsigned int reportSeq;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPerformanceService;

- (void)onInit;
- (void)onClearData;
- (void)onEnterBackground;
- (void)recordPerformanceData:(id)a0;
- (void)reportPerformanceDataByIDKey:(id)a0;
- (void)reportAndSavePerformanceData:(BOOL)a0;
- (id)getSessionPerformanceStatStr:(id)a0;
- (void)reportSessionPerformanceStat:(id)a0 withLogId:(unsigned int)a1;
- (id)getPerformanceStatItemAttr:(id)a0 withSubSeq:(unsigned long long)a1 withSubSeqSum:(unsigned long long)a2;
- (id)getPerformanceJsonString:(id)a0;
- (id)getDataMMKV;
- (id)getConfigMMKV;
- (void).cxx_destruct;

@end
