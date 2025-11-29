@class NSMutableDictionary, NSMapTable, IESLiveIMReplayBuffer;

@interface IESLiveIMReplayManager : NSObject

@property (nonatomic) BOOL replayRunning;
@property (nonatomic) long long bufferSize;
@property (retain, nonatomic) IESLiveIMReplayBuffer *replayBuffer;
@property (retain, nonatomic) NSMapTable *subscribers;
@property (retain, nonatomic) NSMutableDictionary *messageSubscribersDic;

- (void)addReplaySubscriber:(id)a0;
- (void)startReplay;
- (void)stopReplay;
- (void)putMessagesToReplayBuffer:(id)a0;
- (void)removeReplaySubscriber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)replay;
- (id)initWithBufferSize:(long long)a0;

@end
