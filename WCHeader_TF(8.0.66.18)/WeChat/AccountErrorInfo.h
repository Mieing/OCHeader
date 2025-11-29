@class BaseResponseErrMsg;

@interface AccountErrorInfo : NSObject

@property (nonatomic) unsigned int uiMessage;
@property (nonatomic) int baseResponseRet;
@property (retain, nonatomic) BaseResponseErrMsg *errMsg;

+ (id)errorInfoFromBaseResponse:(id)a0;
+ (id)errorInfoFromBaseResponse:(id)a0 networkError:(id)a1;

- (id)init;
- (void)parseErrMsgXml:(id)a0;
- (void).cxx_destruct;

@end
