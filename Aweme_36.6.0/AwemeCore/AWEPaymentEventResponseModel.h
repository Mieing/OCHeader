@class NSString, NSArray;

@interface AWEPaymentEventResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *source;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long videoType;
@property (nonatomic) unsigned long long orderType;
@property (copy, nonatomic) NSArray *unlockEpisodes;
@property (nonatomic) long long fromRepurchase;
@property (nonatomic) long long fromRecharge;
@property (nonatomic) long long isAutoUnlockOpen;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *clientSessionId;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSArray *unlockItems;
@property (nonatomic) long long targetEpisode;
@property (nonatomic) unsigned long long getRightWayType;

+ (id)unlockItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
