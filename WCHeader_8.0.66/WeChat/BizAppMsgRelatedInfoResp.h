@class NSMutableArray, BaseResponse;

@interface BizAppMsgRelatedInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *relatedInfo;
@property (nonatomic) unsigned int refreshIntervalSec;
@property (nonatomic) unsigned int maxUrlCount;

+ (void)initialize;

@end
