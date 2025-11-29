@class NSString, AWEAwemeModel;

@interface AWEFeedNearbyMallShopPoiMsgModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) int expiration;
@property (retain, nonatomic) AWEAwemeModel *feedMallCard;
@property (retain, nonatomic) AWEAwemeModel *feedShopCard;
@property (nonatomic) long long fromSource;
@property (readonly, copy, nonatomic) NSString *fromSourceStr;
@property (nonatomic) BOOL isFromPullMsg;
@property (nonatomic) BOOL isFromLocalCache;
@property (nonatomic) BOOL isFromOffline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isMsgTimeValid;
- (BOOL)isFeedMallCardUsingLynxBG;
- (BOOL)isFeedMallCardUsingLynx;
- (BOOL)trytoConvertDCard;
- (void)tryToCleanDCard;
- (BOOL)isFeedShopCardUsingLynxBG;
- (BOOL)isFeedShopCardUsingLynx;
- (BOOL)trytoConvertDCardFromShopCard;
- (void)tryToCleanDCardRecoverTo:(long long)a0;
- (void).cxx_destruct;

@end
