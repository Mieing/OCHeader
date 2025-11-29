@class NSString, CSPChunkRequestManager;

@interface AWEEffectLLMChunkDataRequestProxy : NSObject <CSPChunkRequestDelegate>

@property (nonatomic) BOOL alreadyReceiveData;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (copy, nonatomic) id /* block */ receiveDataBlock;
@property (copy, nonatomic) id /* block */ chunkFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelRequest;

@end
