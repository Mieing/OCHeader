@class NSString;

@interface EcsPayRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *orderId;
@property (nonatomic) unsigned int paymentAction;

+ (void)initialize;

@end
