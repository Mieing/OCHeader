@class BaseRequest, NSString, NSData;

@interface BizAttrSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;

+ (void)initialize;

- (void)setLastAttrVersion:(id)a0;
- (id)lastAttrVersion;
- (void)setBizUserName:(id)a0;
- (id)bizUserName;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
