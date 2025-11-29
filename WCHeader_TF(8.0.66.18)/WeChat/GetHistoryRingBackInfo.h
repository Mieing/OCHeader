@class RingBackDetail;

@interface GetHistoryRingBackInfo : WXPBGeneratedMessage

@property (retain, nonatomic) RingBackDetail *ringBackDetail;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
