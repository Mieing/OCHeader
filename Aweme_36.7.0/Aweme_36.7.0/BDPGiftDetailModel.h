@class NSArray, NSString;

@interface BDPGiftDetailModel : NSObject

@property (nonatomic) unsigned long long playType;
@property (retain, nonatomic) NSArray *userReceiveGuide;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long giftEffectiveStartTime;
@property (nonatomic) long long giftEffectiveEndTime;
@property (retain, nonatomic) NSArray *propList;
@property (copy, nonatomic) NSString *giftId;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (nonatomic) long long diamondAmount;
@property (nonatomic) long long originAmount;
@property (nonatomic) long long amount;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
