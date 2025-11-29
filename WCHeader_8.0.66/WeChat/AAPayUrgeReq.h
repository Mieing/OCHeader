@class BaseRequest, NSString;

@interface AAPayUrgeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *groupid;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
