@class NSString, NSNumber, NSArray;

@interface BDXBridgeOpenCityPanelCustomStyle : BDXBridgeModel

@property (nonatomic) BOOL hide_history;
@property (nonatomic) BOOL hide_hot_city;
@property (copy, nonatomic) NSString *custom_hint;
@property (nonatomic) BOOL only_show_l2;
@property (retain, nonatomic) NSNumber *channel_type;
@property (retain, nonatomic) NSArray *quick_access_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
