@class NSString, HPRealNameInfo, NSMutableArray, BaseResponse;

@interface CheckHoneyPayerResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) HPRealNameInfo *realNameInfo;
@property (retain, nonatomic) NSMutableArray *cardInfoList;
@property (retain, nonatomic) NSString *hpcardTips;

+ (void)initialize;

@end
