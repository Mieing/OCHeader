@class NSString, BaseResponse;

@interface ScanRewardMaterialCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *respUrl;

+ (void)initialize;

@end
