@class NSString, NSMutableArray;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenHistoryMessageHandler : NSObject <IESLivePublicScreenMessageHandlerProtocol>

@property (retain, nonatomic) NSMutableArray *historyMessagesBuffer;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllMessageBuffer;
- (BOOL)enableConsumeMessages;
- (long long)messageHandlerType;
- (BOOL)addMessageToBuffer:(id)a0;
- (id)consumeMessagesWithLimitCount:(long long)a0;
- (id)allBufferMessages;
- (void).cxx_destruct;
- (id)init;

@end
