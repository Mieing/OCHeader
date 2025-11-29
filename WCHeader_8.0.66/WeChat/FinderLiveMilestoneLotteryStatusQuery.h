@class NSString;

@interface FinderLiveMilestoneLotteryStatusQuery : WXPBGeneratedMessage

@property (nonatomic) unsigned int prizeType;
@property (retain, nonatomic) NSString *milestoneLotteryId;
@property (retain, nonatomic) NSString *couponId;
@property (retain, nonatomic) NSString *relatedProductId;

+ (void)initialize;

@end
