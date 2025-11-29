@class NSNumber, NSString;

@interface IESLiveStartAutoMatchParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *matchType;
@property (retain, nonatomic) NSNumber *matchStyleType;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
