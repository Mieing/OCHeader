@class RingBackDetail;

@interface ExtRingBackDetail : WXPBGeneratedMessage

@property (retain, nonatomic) RingBackDetail *ringBackDetail;
@property (nonatomic) unsigned int startTs;
@property (nonatomic) unsigned int endTs;

+ (void)initialize;

@end
