@class BaseRequest, NSString;

@interface StatusDeleteSelfStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *textStatusId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
