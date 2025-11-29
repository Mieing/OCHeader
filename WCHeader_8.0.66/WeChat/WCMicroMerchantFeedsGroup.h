@class NSString, NSMutableSet;

@interface WCMicroMerchantFeedsGroup : NSObject

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int groupTime;
@property (retain, nonatomic) NSString *summaryTitle;
@property (retain, nonatomic) NSMutableSet *feedIds;
@property (nonatomic) int topFeedType;
@property (nonatomic) unsigned int realWsVersion;
@property (nonatomic) long long realVisibleFeedsCount;

+ (id)fromServerObj:(id)a0;
+ (id)fromDataList:(id)a0 oldGroup:(id)a1;
+ (id)buildWsGroupDict:(id)a0;

- (id)init;
- (id)sortedFeedIds;
- (id)filterFeedIdsWithoutGroupId;
- (id)description;
- (void).cxx_destruct;

@end
