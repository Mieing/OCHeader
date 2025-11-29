@protocol ACCMergeVideoHelperProtocol;

@interface ACCCreationToolDataVideoExporter : ACCCreationToolDataExporter

@property (retain, nonatomic) id<ACCMergeVideoHelperProtocol> holdingVideoMerger;

- (id)exportItemAtIndex:(unsigned long long)a0 onCompletion:(id /* block */)a1;
- (void)cancelWithToken:(id)a0;
- (id)exportAllOnCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)videoToken;

@end
