@class NSString, NSDictionary, AWENearbyGrouponCommonFrequencyData, NSArray;

@interface AWENearbyC2ToolBarMorePanelItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *jumpTargetUrl;
@property (nonatomic) long long descExpiredTimestamp;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *descTrackParams;
@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSArray *desc;
@property (copy, nonatomic) NSArray *entranceConfig;
@property (copy, nonatomic) NSString *btmDCode;
@property (nonatomic) BOOL isUndertakeInvalid;
@property (nonatomic) BOOL canShowDescInfo;
@property (copy, nonatomic) NSString *descInfoSting;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)entranceConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)descJSONTransformer;

- (void).cxx_destruct;

@end
