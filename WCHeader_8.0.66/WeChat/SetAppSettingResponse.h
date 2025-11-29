@class NSString, BaseResponse;

@interface SetAppSettingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appFlag;
@property (nonatomic) unsigned int cmdId;

+ (void)initialize;

@end
