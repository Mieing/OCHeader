@class DirectConnSet, NSMutableArray, RelayConnSet;

@interface VoipMultiRelayConnData : WXPBGeneratedMessage {
    int activeConnIdSetMemoizedSerializedSize;
    int inactiveConnIdSetMemoizedSerializedSize;
}

@property (retain, nonatomic) RelayConnSet *relayConnSet;
@property (retain, nonatomic) DirectConnSet *directConnSet;
@property (nonatomic) int activeConnCnt;
@property (retain, nonatomic) NSMutableArray *activeConnIdSet;
@property (nonatomic) int inactiveConnCnt;
@property (retain, nonatomic) NSMutableArray *inactiveConnIdSet;
@property (nonatomic) int connSetSeq;
@property (retain, nonatomic) RelayConnSet *redirectConnSet;

+ (void)initialize;

@end
