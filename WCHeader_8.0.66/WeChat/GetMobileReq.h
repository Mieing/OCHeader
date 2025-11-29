@class BaseRequest, NSString, NSData, NSMutableArray;

@interface GetMobileReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSData *reqSpamInfo;
@property (nonatomic) unsigned int mobileType;
@property (retain, nonatomic) NSString *msgid;
@property (retain, nonatomic) NSMutableArray *channelTokenList;
@property (retain, nonatomic) NSMutableArray *clientIps;
@property (retain, nonatomic) NSString *language;

+ (void)initialize;

@end
