@class NSString, NSNumber, AWEURLModel;

@interface AWETeenDiscoverNavConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *bubble;
@property (retain, nonatomic) AWEURLModel *icon;
@property (nonatomic) BOOL showYellowDot;
@property (retain, nonatomic) NSNumber *showSeconds;

+ (id)iconJSONTransformer;
+ (id)showYellowDotJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
