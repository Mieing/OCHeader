@class NSNumber;

@interface CSPChunkStateMachineMonitorRecord : CSPChunkDataMonitorRecord

@property (retain, nonatomic) NSNumber *predictTS;
@property (retain, nonatomic) NSNumber *ackTS;
@property (retain, nonatomic) NSNumber *replaceTS;
@property (retain, nonatomic) NSNumber *patchTS;
@property (retain, nonatomic) NSNumber *triggerCallbackTS;
@property (retain, nonatomic) NSNumber *chunkBodyCallbackTriggerTS;
@property (retain, nonatomic) NSNumber *chunkBytesReceived;
@property (retain, nonatomic) NSNumber *globalChunkTS;
@property (readonly, nonatomic) NSNumber *predictTimeStamp;
@property (readonly, nonatomic) NSNumber *ackTimeStamp;
@property (readonly, nonatomic) NSNumber *replaceTimeStamp;
@property (readonly, nonatomic) NSNumber *patchTimeStamp;
@property (readonly, nonatomic) NSNumber *triggerCallbackTimeStamp;
@property (readonly, nonatomic) NSNumber *chunkBodyCallbackTriggerTimeStamp;
@property (readonly, nonatomic) NSNumber *globalChunkTimeStamp;

- (void).cxx_destruct;

@end
