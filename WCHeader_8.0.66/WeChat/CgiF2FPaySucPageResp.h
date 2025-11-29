@class NSString, ExposureInfo, BaseResponse;

@interface CgiF2FPaySucPageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned long long activityType;
@property (retain, nonatomic) ExposureInfo *exposureInfo;

+ (void)initialize;

@end
