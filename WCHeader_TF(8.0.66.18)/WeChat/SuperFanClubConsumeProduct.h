@class NSString;

@interface SuperFanClubConsumeProduct : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int consumeType;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long priceInWecoin;

+ (void)initialize;

@end
