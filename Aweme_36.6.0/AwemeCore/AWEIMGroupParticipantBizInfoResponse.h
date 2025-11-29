@class NSArray;

@interface AWEIMGroupParticipantBizInfoResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *activeTagConfs;
@property (copy, nonatomic) NSArray *inactiveThresholdConfs;
@property (copy, nonatomic) NSArray *activeInfoList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *fansClubInfoList;
@property (copy, nonatomic) NSArray *fansIconConf;
@property (nonatomic) long long expireInterval;
@property (copy, nonatomic) NSArray *liveFansSubscriptionDateList;
@property (retain, nonatomic) NSArray *fansTagsModelList;
@property (retain, nonatomic) NSArray *liveFansClubIconConfigList;
@property (retain, nonatomic) NSArray *purchasedFansClubIconConfigList;

+ (id)activeInfoListJSONTransformer;
+ (id)activeTagConfsJSONTransformer;
+ (id)inactiveThresholdConfsJSONTransformer;
+ (id)fansClubInfoListJSONTransformer;
+ (id)fansIconConfJSONTransformer;
+ (id)liveFansSubscriptionDateListJSONTransformer;
+ (id)liveFansClubIconConfigListJSONTransformer;
+ (id)purchasedFansClubIconConfigListJSONTransformer;
+ (id)fansTagsModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
