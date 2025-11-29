@class NSString, PlanIndexResp_Banner, NSMutableArray, BaseResponse;

@interface PlanIndexResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSMutableArray *planList;
@property (nonatomic) unsigned long long limitCnt;
@property (retain, nonatomic) NSString *indexDesc;
@property (retain, nonatomic) PlanIndexResp_Banner *banner;
@property (retain, nonatomic) NSString *overPlanlimitDesc;
@property (retain, nonatomic) NSString *productDesc;
@property (nonatomic) int redirectPage;

+ (void)initialize;

@end
