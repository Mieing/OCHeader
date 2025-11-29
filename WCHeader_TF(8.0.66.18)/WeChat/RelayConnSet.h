@class NSMutableArray;

@interface RelayConnSet : WXPBGeneratedMessage

@property (nonatomic) int relayConnCnt;
@property (retain, nonatomic) NSMutableArray *relayConns;

+ (void)initialize;

@end
