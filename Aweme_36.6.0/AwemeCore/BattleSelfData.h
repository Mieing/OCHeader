@class NSString;

@interface BattleSelfData : IESLivePBBaseMessage

@property (nonatomic) long long pkDurationTime;
@property (nonatomic) int pkValueType;
@property (nonatomic) long long likeType;
@property (nonatomic) long long giftValueType;
@property (nonatomic) long long giftUvType;
@property (nonatomic) long long ticketType;
@property (copy, nonatomic) NSString *setUid;
@property (nonatomic) long long subscribeType;

+ (id)descriptor;

@end
