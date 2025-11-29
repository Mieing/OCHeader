@class SyncVersionSingleRespInfo, NSMutableArray, BaseResponse;

@interface PreDownloadCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SyncVersionSingleRespInfo *resp;
@property (retain, nonatomic) NSMutableArray *listResp;

+ (void)initialize;

- (void)setListResp:(id)a0;
- (id)listResp;
- (void)setResp:(id)a0;
- (id)resp;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
