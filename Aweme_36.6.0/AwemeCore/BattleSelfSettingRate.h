@class NSString;

@interface BattleSelfSettingRate : IESLivePBBaseMessage

@property (nonatomic) long long pkValueType;
@property (nonatomic) long long pk2LikeRate;
@property (nonatomic) long long gift2PkRate;
@property (nonatomic) long long giftUv2PkRate;
@property (nonatomic) long long ticket2PkRate;
@property (copy, nonatomic) NSString *setUid;
@property (nonatomic) long long subscribePkRate;

+ (id)descriptor;

@end
