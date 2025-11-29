@class NSArray, NSNumber;

@interface AFDRadarHeartBeatResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *nearbyItemList;
@property (retain, nonatomic) NSArray *backupItemList;
@property (retain, nonatomic) NSArray *noticeList;
@property (retain, nonatomic) NSNumber *interval;
@property (nonatomic) unsigned long long strategy;
@property (copy, nonatomic) NSArray *neighbourhoodGroupList;
@property (retain, nonatomic) NSArray *shareInbox;

+ (id)noticeListJSONTransformer;
+ (id)nearbyItemListJSONTransformer;
+ (id)backupItemListJSONTransformer;
+ (id)neighbourhoodGroupListJSONTransformer;
+ (id)shareInboxJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
