@class RingBackDetail;

@interface GetRecommendRingBackInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) RingBackDetail *ringBackDetail;

+ (void)initialize;

@end
