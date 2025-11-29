@class NSString, BaseResponse;

@interface OfficialSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *wishItemsJson;

+ (void)initialize;

@end
