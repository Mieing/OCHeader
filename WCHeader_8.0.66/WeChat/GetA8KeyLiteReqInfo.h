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

- (void)setAppMsgInnerType:(unsigned int)a0;
- (unsigned int)appMsgInnerType;
- (void)setContentType:(unsigned int)a0;
- (unsigned int)contentType;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setControlBits:(unsigned int)a0;
- (unsigned int)controlBits;
- (void)setReferUrl:(id)a0;
- (id)referUrl;
- (void)setDigest:(id)a0;
- (id)digest;
- (void)setAppDesc:(id)a0;
- (id)appDesc;
- (void)setAppTitle:(id)a0;
- (id)appTitle;
- (void)setAppId:(id)a0;
- (id)appId;
- (void)setReqUrl:(id)a0;
- (id)reqUrl;
- (void)setRequestId:(unsigned int)a0;
- (unsigned int)requestId;

@end
