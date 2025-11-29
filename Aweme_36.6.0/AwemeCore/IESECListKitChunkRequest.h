@class NSArray, NSDictionary, CSPChunkRequestManager, NSString;

@interface IESECListKitChunkRequest : NSObject <CSPChunkRequestDelegate>

@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (copy, nonatomic) id /* block */ resultCompletion;
@property (copy, nonatomic) id /* block */ metricsBlock;
@property (nonatomic) long long chunkCount;
@property (copy, nonatomic) NSDictionary *errorInfo;
@property (nonatomic) double ecRequestStart;
@property (nonatomic) double ecRequestEnd;
@property (copy, nonatomic) NSArray *successCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startNewStreamWithUrlString:(id)a0 params:(id)a1 isPost:(BOOL)a2 isFullChunk:(BOOL)a3 needCommonParams:(BOOL)a4 headerField:(id)a5 enableHttpCache:(BOOL)a6 completion:(id /* block */)a7 metricsBlock:(id /* block */)a8;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 isPost:(BOOL)a2 isFullChunk:(BOOL)a3 needCommonParams:(BOOL)a4 headerField:(id)a5 enableHttpCache:(BOOL)a6 completion:(id /* block */)a7 metricsBlock:(id /* block */)a8;
- (void)callBackResult:(id)a0;
- (id)monitorRecords;
- (void)callBackMetrics:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
