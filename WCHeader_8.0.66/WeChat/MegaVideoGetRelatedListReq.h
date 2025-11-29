@class BaseRequest, NSString, MegaVideoBaseRequest, NSData, MegaVideoClientStatus;

@interface MegaVideoGetRelatedListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long videoId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *videoNonceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSData *objectSessionInfo;
@property (retain, nonatomic) MegaVideoClientStatus *status;

+ (void)initialize;

@end
