@class NSMutableArray, BaseResponse;

@interface JSAPIGetBizUseUserInfoRecordListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
