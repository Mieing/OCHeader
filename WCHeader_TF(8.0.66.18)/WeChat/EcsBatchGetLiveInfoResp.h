@class NSMutableArray, BaseResponse;

@interface EcsBatchGetLiveInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveInfoList;
@property (nonatomic) unsigned int interval;

+ (void)initialize;

@end
