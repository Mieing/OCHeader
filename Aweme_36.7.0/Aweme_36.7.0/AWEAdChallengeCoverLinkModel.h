@class NSString, AWEAdChallengeRoomModel, AWEAdChallengeShopModel, NSNumber;

@interface AWEAdChallengeCoverLinkModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *coverLinkType;
@property (copy, nonatomic) NSString *coverLinkSchema;
@property (retain, nonatomic) AWEAdChallengeRoomModel *roomData;
@property (retain, nonatomic) AWEAdChallengeShopModel *shopData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
