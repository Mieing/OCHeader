@class NSString, NSArray, AWEUserModel;

@interface AWENearbyActiveStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *subTitles;
@property (nonatomic) long long nearbyActiveStatus;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
