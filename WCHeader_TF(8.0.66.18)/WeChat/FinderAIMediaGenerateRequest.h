@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderAIMediaGenerateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSData *aiBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
