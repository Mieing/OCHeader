@class NSString, NSArray;

@interface AWEIMGroupLiveFansSubscriptionDateModel : AWEBaseApiModel <AWEIMGroupParticipantBizInfoModel>

@property (copy, nonatomic) NSString *belongCid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bizInfoModel;
- (void).cxx_destruct;

@end
