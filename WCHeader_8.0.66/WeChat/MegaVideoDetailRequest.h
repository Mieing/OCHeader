@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (nonatomic) unsigned long long videoId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *videoNonceId;
@property (retain, nonatomic) NSString *encryptedVideoId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
