@class NSString, BaseResponse;

@interface GetQQAssistantInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *weappParam;
@property (retain, nonatomic) NSString *menuWeappPath;
@property (retain, nonatomic) NSString *bindQqWeappPath;
@property (retain, nonatomic) NSString *menuSettingWeappPath;

+ (void)initialize;

@end
