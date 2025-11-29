@class BaseRequest, NSData, NSString;

@interface FinderLiveOpenPreHotProductPriceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *anchorFinderUsername;

+ (void)initialize;

@end
