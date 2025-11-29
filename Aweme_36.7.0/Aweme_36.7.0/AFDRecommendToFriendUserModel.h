@class NSString, AWERelativeUserModel, NSNumber;

@interface AFDRecommendToFriendUserModel : AWEBaseApiModel

@property (retain, nonatomic) AWERelativeUserModel *user;
@property (copy, nonatomic) NSString *postscriptText;
@property (retain, nonatomic) NSNumber *recommendTime;
@property (retain, nonatomic) NSNumber *recommendAppId;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
