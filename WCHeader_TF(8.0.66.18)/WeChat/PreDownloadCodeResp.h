@class SyncVersionSingleRespInfo, NSMutableArray, BaseResponse;

@interface PreDownloadCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SyncVersionSingleRespInfo *resp;
@property (retain, nonatomic) NSMutableArray *listResp;

+ (void)initialize;

@end
