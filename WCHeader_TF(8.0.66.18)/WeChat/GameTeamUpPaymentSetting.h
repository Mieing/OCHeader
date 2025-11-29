@class NSMutableArray;

@interface GameTeamUpPaymentSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int maximumPayment;
@property (nonatomic) unsigned int settedPayment;
@property (retain, nonatomic) NSMutableArray *defaultPaymentList;

+ (void)initialize;

@end
