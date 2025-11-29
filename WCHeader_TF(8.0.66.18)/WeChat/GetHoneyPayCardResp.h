@class HoneyUserDetail, NSString, HPRealNameInfo, HPCardOperItem, C2CMsgNode, MakeSureButton, BaseResponse;

@interface GetHoneyPayCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) HPRealNameInfo *realNameInfo;
@property (retain, nonatomic) C2CMsgNode *c2Cmsg;
@property (retain, nonatomic) MakeSureButton *toRemind;
@property (retain, nonatomic) HPCardOperItem *operItem;
@property (retain, nonatomic) HoneyUserDetail *detail;

+ (void)initialize;

@end
