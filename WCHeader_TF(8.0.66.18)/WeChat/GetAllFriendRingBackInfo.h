@class NSString, RingBackDetail, RingBack;

@interface GetAllFriendRingBackInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) RingBack *ringBack;
@property (retain, nonatomic) RingBackDetail *ringBackDetail;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
