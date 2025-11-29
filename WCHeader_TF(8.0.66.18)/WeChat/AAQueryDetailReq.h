@class BaseRequest, NSString;

@interface AAQueryDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSString *sign;
@property (nonatomic) unsigned int ver;

+ (void)initialize;

@end
