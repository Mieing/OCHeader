@class BaseRequest, FinderBaseRequest, NSString;

@interface GetSpecificTemplateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *shortUrl;
@property (nonatomic) unsigned int notUseCache;

+ (void)initialize;

@end
