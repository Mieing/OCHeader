@class NSString, VoipAddr, NSMutableArray;

@interface SpeedResult : WXPBGeneratedMessage {
    int rttMemoizedSerializedSize;
    int downSeqMemoizedSerializedSize;
    int upSeqMemoizedSerializedSize;
}

@property (nonatomic) unsigned int clientIp;
@property (nonatomic) unsigned int testPktSize;
@property (nonatomic) unsigned int testCnt;
@property (retain, nonatomic) VoipAddr *addr;
@property (nonatomic) unsigned int avgRtt;
@property (nonatomic) unsigned int minRtt;
@property (nonatomic) unsigned int maxRtt;
@property (nonatomic) unsigned int rttCnt;
@property (retain, nonatomic) NSMutableArray *rtt;
@property (nonatomic) unsigned int downSeqCnt;
@property (retain, nonatomic) NSMutableArray *downSeq;
@property (nonatomic) unsigned int upSeqCnt;
@property (retain, nonatomic) NSMutableArray *upSeq;
@property (retain, nonatomic) NSString *clientIpStr;

+ (void)initialize;

@end
