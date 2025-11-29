@class AWEEcomSearchDataPrefetchModel, NSString, CSPChunkRequestManager;

@interface AWEEcomSearchMiddleBFFStreamPrefetcher : NSObject <CSPChunkRequestDelegate>

@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (retain, nonatomic) AWEEcomSearchDataPrefetchModel *prefetchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)requestWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
