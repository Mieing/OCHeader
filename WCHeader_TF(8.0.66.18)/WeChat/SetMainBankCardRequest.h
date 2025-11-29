@class BaseRequest, NSString, ActionLocation;

@interface SetMainBankCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (retain, nonatomic) NSString *jsapiReqkey;

+ (void)initialize;

@end
