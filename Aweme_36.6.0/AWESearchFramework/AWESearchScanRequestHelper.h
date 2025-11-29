@class NSString, CSPChunkRequestManager;

@interface AWESearchScanRequestHelper : NSObject <CSPChunkRequestDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CSPChunkRequestManager *chunkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)requestSearchScanWithImage:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
