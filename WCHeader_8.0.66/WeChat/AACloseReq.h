@class BaseRequest, NSString;

@interface AACloseReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *groupid;

+ (void)initialize;

@end
