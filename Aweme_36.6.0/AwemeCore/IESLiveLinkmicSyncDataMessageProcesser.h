@interface IESLiveLinkmicSyncDataMessageProcesser : IESLiveMessageProcesser

@property (nonatomic) BOOL isDispatcherPriorityMessage;
@property (nonatomic) BOOL overrideMSGWithWRDSLinkerContentMap;

- (BOOL)canProcessMessage:(id)a0;
- (BOOL)process:(id)a0;
- (id)init;

@end
