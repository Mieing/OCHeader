@class NSString, CSPChunkRequestManager;

@interface AWEDCFeedChunkBasicRequestProxy : NSObject <CSPChunkRequestDelegate>

@property (nonatomic) BOOL alreadyReceiveData;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (copy, nonatomic) id /* block */ receiveDataBlock;
@property (copy, nonatomic) id /* block */ chunkFinishBlock;
@property (copy, nonatomic) id /* block */ pbFinishBlock;
@property (nonatomic) BOOL usePb;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelMergePropertyConfig;
+ (id)modelFromPBResponse:(id)a0 error:(id)a1;
+ (id)modelFromResponse:(id)a0 error:(id)a1;
+ (void)_handleRawAdDataInAwemeList:(id)a0;

- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)didReceiveRawData:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelRequest;

@end
