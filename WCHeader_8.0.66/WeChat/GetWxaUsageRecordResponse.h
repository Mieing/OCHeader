@class WxaAppBaseResponse, CommUseAppInfo, NSMutableArray, BaseResponse;

@interface GetWxaUsageRecordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSMutableArray *starList;
@property (retain, nonatomic) NSMutableArray *historyList;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) CommUseAppInfo *commuseAppinfo;

+ (void)initialize;

@end
