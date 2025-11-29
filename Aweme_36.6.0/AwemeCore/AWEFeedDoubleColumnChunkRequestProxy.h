@class NSString, CSPChunkRequestManager;

@interface AWEFeedDoubleColumnChunkRequestProxy : NSObject <CSPChunkRequestDelegate>

@property (nonatomic) BOOL alreadyReceiveData;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (copy, nonatomic) id /* block */ receiveDataBlock;
@property (copy, nonatomic) id /* block */ chunkFinishBlock;
@property (copy, nonatomic) id /* block */ pbFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)didReceiveRawData:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelRequest;

@end
