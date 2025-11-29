@class NSNumber, NSArray, NSString;

@interface IESLiveCreateFakeGiftViewParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *senderAvatars;
@property (retain, nonatomic) NSNumber *giftID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) NSNumber *comboCount;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSString *iconImage;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *giftPrice;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
