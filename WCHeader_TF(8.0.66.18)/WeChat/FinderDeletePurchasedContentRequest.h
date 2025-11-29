@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderDeletePurchasedContentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) NSString *contentId;

+ (void)initialize;

@end
