@class NSString;

@interface ChooseProudct : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int productCount;
@property (retain, nonatomic) NSString *durationId;
@property (nonatomic) unsigned int validTime;
@property (nonatomic) unsigned long long wecoinAmount;

+ (void)initialize;

@end
