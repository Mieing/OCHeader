@class NSString, NSData;

@interface MilestoneLotteryRedpacketInfo_RedpacketPrizeInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isReceived;
@property (retain, nonatomic) NSString *redPacketUri;
@property (retain, nonatomic) NSData *getBuff;
@property (retain, nonatomic) NSString *prizeDesc;
@property (retain, nonatomic) NSString *buttonWording;

+ (void)initialize;

@end
