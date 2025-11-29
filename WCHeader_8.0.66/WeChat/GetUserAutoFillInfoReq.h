@class BaseRequest, NSString, NSMutableArray;

@interface GetUserAutoFillInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL getAllInfo;
@property (retain, nonatomic) NSMutableArray *userInfoList;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

- (void)setClientVersion:(unsigned int)a0;
- (unsigned int)clientVersion;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setUserInfoList:(id)a0;
- (id)userInfoList;
- (void)setGetAllInfo:(BOOL)a0;
- (BOOL)getAllInfo;
- (void)setAppid:(id)a0;
- (id)appid;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
