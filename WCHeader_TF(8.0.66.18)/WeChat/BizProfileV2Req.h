@class BaseRequest, NSString, NSData;

@interface BizProfileV2Req : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSData *offset;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned long long tmplControlFlag;
@property (nonatomic) unsigned int bizSessionId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchClickId;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int bizType;

+ (void)initialize;

@end
