@class NSData, NSMutableArray;

@interface SpeedTestNotify : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *serverAddrList;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int reqSize;
@property (retain, nonatomic) NSData *ctx;
@property (nonatomic) unsigned int concurrentNum;

+ (void)initialize;

@end
