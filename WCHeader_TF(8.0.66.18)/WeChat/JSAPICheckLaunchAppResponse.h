@class JSAPIBaseResponse, BaseResponse;

@interface JSAPICheckLaunchAppResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (nonatomic) unsigned int errcode;
@property (nonatomic) int showType;
@property (nonatomic) int jumpStoreFlag;

+ (void)initialize;

@end
