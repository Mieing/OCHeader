@class NSString, NSArray, NSDictionary;

@interface AWEIMFansTagsModel : MTLModel <MTLJSONSerializing, AWEIMGroupParticipantBizInfoModel>

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) NSString *belongCid;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (copy, nonatomic) NSString *groupOwnerNickName;
@property (retain, nonatomic) NSDictionary *liveFansClubIconConfigDict;
@property (retain, nonatomic) NSDictionary *purchasedFansClubIconConfigDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withTagsEventParamsForCurrentUserWithConversationId:(id)a0 con:(id)a1;
+ (id)tagsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)withTagsEventParamsDict;
- (id)bizInfoModel;
- (void).cxx_destruct;

@end
