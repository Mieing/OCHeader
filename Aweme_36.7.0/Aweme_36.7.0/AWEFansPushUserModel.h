@class NSString, NSArray, NSNumber, AWEUserModel;

@interface AWEFansPushUserModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *urgeTime;
@property (nonatomic) long long userType;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSArray *giftList;
@property (retain, nonatomic) NSString *urgeResultText;
@property (retain, nonatomic) NSString *sendGiftResultText;
@property (nonatomic) long long urgeResultType;
@property (retain, nonatomic) NSArray *extraUrgeType;

+ (id)userJSONTransformer;
+ (id)giftListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
