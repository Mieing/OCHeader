@class NSString;

@interface BDXBridgeSetContainerPageUI : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (copy, nonatomic) NSString *statusBarBgColor;
@property (nonatomic) long long statusFontMode;

+ (id)statusFontModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
