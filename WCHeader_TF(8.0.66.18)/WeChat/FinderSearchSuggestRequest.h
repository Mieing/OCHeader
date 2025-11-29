@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderSearchSuggestRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
