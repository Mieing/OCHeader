@class NSString, NSMutableArray, IESLivePublicScreenContext;
@protocol IESLivePublicScreenInsertDataHandlerDelegate, IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenInsertDataHandler : NSObject <IESLivePublicScreenMessageHandlerProtocol, IESLivePublicScreenNodeHandlerProtocol>

@property (retain, nonatomic) NSMutableArray *myMessagesBuffer;
@property (retain, nonatomic) NSMutableArray *auctionMessageBuffer;
@property (retain, nonatomic) NSMutableArray *myMessageNodeBuffer;
@property (retain, nonatomic) NSMutableArray *auctionMessageNodeBuffer;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (weak, nonatomic) id<IESLivePublicScreenInsertDataHandlerDelegate> delegate;
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
- (id)initWithPublicScreenContext:(id)a0 delegate:(id)a1;
- (BOOL)isSendByCurrentUser:(id)a0;
- (BOOL)isAuctionMessage:(id)a0;
- (BOOL)isMyMessageNode:(id)a0;
- (void).cxx_destruct;

@end
