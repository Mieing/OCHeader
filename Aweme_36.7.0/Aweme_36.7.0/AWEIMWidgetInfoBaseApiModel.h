@class NSArray;

@interface AWEIMWidgetInfoBaseApiModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
