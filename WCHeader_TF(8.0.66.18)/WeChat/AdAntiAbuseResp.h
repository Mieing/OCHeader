@class NSString, BaseResponse;

@interface AdAntiAbuseResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int canvasAuthFailed;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int cleanLocalCache;

+ (void)initialize;

@end
