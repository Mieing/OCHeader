@class NSArray;

@interface AWELongVideoWidgetMetaResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *widgetList;

+ (id)widgetListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
