@class NSString, NSArray;

@interface AWEFollowNotificationDetail : AWEBaseApiModel

@property (retain, nonatomic) NSString *templateText;
@property (retain, nonatomic) NSArray *templateValue;

+ (id)templateValueJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
