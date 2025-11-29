@class NSMutableArray, NSMutableDictionary;

@interface DolphinDataTransferTask : DolphinRerankBaseTask

@property (retain, nonatomic) NSMutableArray *dataSourceCapture;
@property (retain, nonatomic) NSMutableDictionary *oldAnalyzeDict;
@property (nonatomic) BOOL hasPrePorcessDataSrc;
@property (retain, nonatomic) NSMutableDictionary *dataSourceNotRerankDict;

- (void)taskExcute;
- (void)onTaskInit;
- (BOOL)shouldBeExcuted:(BOOL)a0 error:(id)a1 input:(id)a2;
- (id)makeDataSourceWithLatestRecordCount:(id)a0 rerankFloor:(long long)a1;
- (void)requestForPitaya:(id)a0;
- (id)makeFeedData:(id)a0 floor:(long long)a1;
- (long long)makeFeedStatus:(id)a0 floor:(long long)a1;
- (id)makeFeedActionData:(id)a0 floor:(long long)a1;
- (id)makeCustomData:(id)a0 floor:(long long)a1;
- (id)makeHiddenData;
- (void).cxx_destruct;

@end
