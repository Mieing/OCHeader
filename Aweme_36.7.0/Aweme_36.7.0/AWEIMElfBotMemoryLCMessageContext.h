@class NSMutableDictionary;

@interface AWEIMElfBotMemoryLCMessageContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *packetDic;
@property (nonatomic) int packetCount;
@property (copy, nonatomic) id /* block */ convertBlock;
@property (nonatomic) long long timestamp;

- (id)targetMessage;
- (id)initWithPacketCount:(int)a0 convertBlock:(id /* block */)a1;
- (BOOL)hasEnoughMessage;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (long long)messageCount;

@end
