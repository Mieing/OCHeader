@class BaseRequest, NSString, NSData;

@interface DelTempSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSData *extInfo;

+ (void)initialize;

@end
