@class NSString, NSData;

@interface GetA8KeyLiteReqInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *reqUrl;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appTitle;
@property (retain, nonatomic) NSString *appDesc;
@property (retain, nonatomic) NSData *digest;
@property (retain, nonatomic) NSString *referUrl;
@property (nonatomic) unsigned int controlBits;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int contentType;
@property (nonatomic) unsigned int appMsgInnerType;

+ (void)initialize;

@end
