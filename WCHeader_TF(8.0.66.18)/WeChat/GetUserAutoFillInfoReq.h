@class BaseRequest, NSString, NSMutableArray;

@interface GetUserAutoFillInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL getAllInfo;
@property (retain, nonatomic) NSMutableArray *userInfoList;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
