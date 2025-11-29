@class NSString;

@interface QryAutoPlanOrderListResp_PlanOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *date;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *wording;

+ (void)initialize;

@end
