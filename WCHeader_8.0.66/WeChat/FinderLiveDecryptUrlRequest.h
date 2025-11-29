@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveDecryptUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *encryptedUrl;

+ (void)initialize;

@end
