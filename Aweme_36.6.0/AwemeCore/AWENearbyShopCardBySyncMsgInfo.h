@class NSString, NSDictionary;

@interface AWENearbyShopCardBySyncMsgInfo : NSObject

@property (nonatomic) BOOL isFirstPresentationCard;
@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) double serverTs;
@property (nonatomic) double receivedTs;
@property (copy, nonatomic) NSDictionary *msgData;
@property (nonatomic) BOOL hasAlreadyRefreshCard;
@property (nonatomic) BOOL isNearbyTab;
@property (nonatomic) BOOL isFromPullMsg;
@property (nonatomic) long long bizType;

- (id)initWithShopMsg:(id)a0;
- (void).cxx_destruct;

@end
