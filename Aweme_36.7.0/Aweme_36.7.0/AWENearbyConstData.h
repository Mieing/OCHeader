@class NSString, NSDictionary;

@interface AWENearbyConstData : NSObject

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *labelString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL isYouthControlEnabled;
@property (copy, nonatomic) NSString *entriesRefreshType;
@property (nonatomic) BOOL isInFeedContainer;
@property (nonatomic) BOOL isClickBottonIcon;
@property (copy, nonatomic) NSString *insertFreshAwemeIds;
@property (nonatomic) long long insertFreshType;
@property (nonatomic) BOOL isShowingNearbyVCFloatHeader;
@property (nonatomic) double nearbyVCFloatHeaderHeight;
@property (nonatomic) BOOL isNewCardStyle;
@property (nonatomic) BOOL isNewNaviBarStyle;
@property (nonatomic) BOOL isPublishToNearby;
@property (nonatomic) BOOL hasFinishedPublish;

- (void).cxx_destruct;

@end
