@class NSString, AWEUserModel;

@interface AWERecommendPersonNotificationModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEUserModel *fromUser;

+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
