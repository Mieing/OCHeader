@class NSString, BaseResponse;

@interface UncheckMchServicePosResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
