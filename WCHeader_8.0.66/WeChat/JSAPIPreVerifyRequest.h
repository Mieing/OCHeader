@class BaseRequest, NSString, NSMutableArray;

@interface JSAPIPreVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *jsapiList;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *signatureMethod;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sourceAppid;
@property (retain, nonatomic) NSMutableArray *tagnameList;
@property (nonatomic) unsigned int entryScene;
@property (nonatomic) unsigned int requestId;

+ (void)initialize;

@end
