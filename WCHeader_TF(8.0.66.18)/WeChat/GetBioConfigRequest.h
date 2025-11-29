@class BaseRequest, NSString, NSData, SKBuiltinBuffer_t;

@interface GetBioConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *userTicket;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (nonatomic) unsigned int checkLiveFlag;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *jsonStr;
@property (retain, nonatomic) NSData *liveSelectData;
@property (retain, nonatomic) NSData *bizClientExt;

+ (void)initialize;

@end
