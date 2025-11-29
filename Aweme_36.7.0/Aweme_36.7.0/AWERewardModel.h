@class NSString, AWEUserModel;

@interface AWERewardModel : AWEBaseApiModel

@property (nonatomic) long long amount;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long admireType;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
