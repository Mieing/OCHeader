@class NSString, AWESearchNearbyEntranceColorConfig, AWEURLModel;

@interface AWESearchNearbyEntranceConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *contentColor;
@property (retain, nonatomic) AWESearchNearbyEntranceColorConfig *originColorConfig;
@property (retain, nonatomic) AWESearchNearbyEntranceColorConfig *scrolledColorConfig;
@property (retain, nonatomic) AWESearchNearbyEntranceColorConfig *btnColorConfig;
@property (retain, nonatomic) AWEURLModel *originBorderImg;
@property (retain, nonatomic) AWEURLModel *scrolledBorderImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originColorConfigJSONTransformer;
+ (id)scrolledColorConfigJSONTransformer;
+ (id)btnColorConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
