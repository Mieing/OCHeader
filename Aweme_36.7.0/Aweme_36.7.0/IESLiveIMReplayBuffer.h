@class NSMutableArray;

@interface IESLiveIMReplayBuffer : NSObject

@property (nonatomic) long long replayArrayMaxSize;
@property (retain, nonatomic) NSMutableArray *replayMessageArray;

- (void)addMessageToBuffer:(id)a0;
- (id)initWithMaxBufferSize:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearBuffer;

@end
