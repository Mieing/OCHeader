@class NSString, AFDRadarUserModel, AFDRadarGroupModel;

@interface AFDRadarNearbyItemModel : AWEBaseApiModel

@property (nonatomic) long long itemType;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL isFromNotice;
@property (nonatomic) BOOL isFromPrivateAccount;
@property (retain, nonatomic) AFDRadarUserModel *user;
@property (retain, nonatomic) AFDRadarGroupModel *group;

+ (id)userJSONTransformer;
+ (id)groupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithType:(long long)a0 andPostion:(long long)a1;
- (void).cxx_destruct;

@end
