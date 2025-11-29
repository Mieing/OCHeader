@class PlanIndexResp_MoreRecords, NSString, PlanIndexResp_MngPlanItem, PlanIndexResp_TransTipsItem;

@interface PlanIndexResp_PlanItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int day;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *cardTail;
@property (retain, nonatomic) NSString *bindSerialNo;
@property (retain, nonatomic) NSString *transDst;
@property (retain, nonatomic) PlanIndexResp_TransTipsItem *transTips;
@property (retain, nonatomic) PlanIndexResp_MoreRecords *records;
@property (retain, nonatomic) PlanIndexResp_MngPlanItem *mngPlan;
@property (nonatomic) unsigned int usrPlanId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankLogo;
@property (retain, nonatomic) NSString *cardCategoryName;

+ (void)initialize;

@end
