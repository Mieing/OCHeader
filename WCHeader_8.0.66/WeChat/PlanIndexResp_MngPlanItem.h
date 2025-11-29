@class NSString, NSMutableArray;

@interface PlanIndexResp_MngPlanItem : WXPBGeneratedMessage

@property (nonatomic) BOOL isMngGrey;
@property (retain, nonatomic) NSString *mngGreyTips;
@property (retain, nonatomic) NSMutableArray *mngTypeList;

+ (void)initialize;

@end
