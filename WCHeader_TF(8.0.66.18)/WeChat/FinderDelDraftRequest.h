@class BaseRequest, NSString, FinderBaseRequest;

@interface FinderDelDraftRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;

+ (void)initialize;

@end
