@class NSData, NSString, ShopItemIDUnit;

@interface FinderLiveAskForPromoteProductRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *askerUsername;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
