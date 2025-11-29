@class AWEAdChallengeShopModel, AWEAdChallengeRoomModel, NSString, NSNumber;

@interface AWEAdChallengeLiveECommerceCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cardType;
@property (retain, nonatomic) AWEAdChallengeRoomModel *roomData;
@property (retain, nonatomic) AWEAdChallengeShopModel *shopData;
@property (copy, nonatomic) NSString *cardCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
