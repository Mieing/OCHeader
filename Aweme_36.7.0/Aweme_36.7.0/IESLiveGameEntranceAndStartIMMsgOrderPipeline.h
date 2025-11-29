@class NSString, NSMutableArray;

@interface IESLiveGameEntranceAndStartIMMsgOrderPipeline : NSObject <IESLivePipelineDelegate>

@property (retain, nonatomic) NSMutableArray *cachedAnchorMsgs;
@property (nonatomic) BOOL isReceivedOpenEntrance;
@property (copy, nonatomic) NSString *connectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
