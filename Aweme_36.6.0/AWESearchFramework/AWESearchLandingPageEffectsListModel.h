@class NSString, NSMutableArray;

@interface AWESearchLandingPageEffectsListModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *props;

+ (id)propsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
