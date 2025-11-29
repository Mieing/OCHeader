@class NSString;

@interface FinderLiveRedPacketInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) unsigned long long beginTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int remainTime;
@property (retain, nonatomic) NSString *referLiveMicId;
@property (retain, nonatomic) NSString *redpacketAppMsg;
@property (nonatomic) int status;

+ (void)initialize;

@end
