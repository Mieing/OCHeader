@class BaseRequest, NSString, NSData;

@interface FaceIdentifyPrePageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *jsonStr;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int checkAliveType;
@property (retain, nonatomic) NSData *extSpamInfo;
@property (retain, nonatomic) NSData *clientExtInfo;

+ (void)initialize;

@end
