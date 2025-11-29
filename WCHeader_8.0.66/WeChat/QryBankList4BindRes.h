@class PopItem, NSString, NSMutableArray, BaseResponse;

@interface QryBankList4BindRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *bindCardDesc;
@property (retain, nonatomic) NSMutableArray *banklist;
@property (retain, nonatomic) PopItem *guideInfo;
@property (retain, nonatomic) NSString *trueName;

+ (void)initialize;

@end
