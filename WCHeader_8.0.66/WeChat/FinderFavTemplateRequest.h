@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderFavTemplateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned long long timestampMs;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
