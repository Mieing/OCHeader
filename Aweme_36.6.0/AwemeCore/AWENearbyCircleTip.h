@class NSNumber, NSString, NSArray;

@interface AWENearbyCircleTip : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *circleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *relativeUsers;

+ (id)relativeUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
