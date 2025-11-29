@class NSString, NSMutableArray;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenDefaultDataHandler : NSObject <IESLivePublicScreenMessageHandlerProtocol, IESLivePublicScreenNodeHandlerProtocol>

@property (nonatomic) long long bufferMaxCount;
@property (retain, nonatomic) NSMutableArray *refreshMessagesBuffer;
@property (retain, nonatomic) NSMutableArray *refreshNodesBuffer;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllMessageBuffer;
- (void)removeAllNodeBuffer;
- (BOOL)enableConsumeMessages;
- (long long)messageHandlerType;
- (BOOL)addMessageToBuffer:(id)a0;
- (id)consumeMessagesWithLimitCount:(long long)a0;
- (id)allBufferMessages;
- (long long)nodeHandlerType;
- (BOOL)addNodeToBuffer:(id)a0;
- (id)consumeRefreshNodesWithLimitCount:(long long)a0;
- (id)allBufferNodes;
- (id)initWithRefreshBufferMaxCount:(long long)a0;
- (void).cxx_destruct;

@end
