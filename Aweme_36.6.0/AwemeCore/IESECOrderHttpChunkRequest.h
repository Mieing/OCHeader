@class NSArray, NSDictionary, CSPChunkRequestManager, NSString;

@interface IESECOrderHttpChunkRequest : NSObject <CSPChunkRequestDelegate>

@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (copy, nonatomic) id /* block */ resultCompletion;
@property (copy, nonatomic) id /* block */ metricsBlock;
@property (nonatomic) long long chunkCount;
@property (copy, nonatomic) NSDictionary *errorInfo;
@property (nonatomic) double requestStart;
@property (copy, nonatomic) NSArray *successCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (id)monitorRecords;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 completion:(id /* block */)a6 metricsBlock:(id /* block */)a7;
- (void).cxx_destruct;
- (void)cancel;

@end
