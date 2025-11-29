@class NSString, NSDictionary, BDXBridgeOpenMixVideoLog, NSNumber;

@interface BDXBridgeOpenMixVideoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *aweme;
@property (retain, nonatomic) NSNumber *showStyle;
@property (retain, nonatomic) NSNumber *disableFallThrough;
@property (copy, nonatomic) NSString *search_id;
@property (copy, nonatomic) NSString *event_type;
@property (retain, nonatomic) BDXBridgeOpenMixVideoLog *log;
@property (nonatomic) long long panelStatus;

+ (id)panelStatusJSONTransformer;
+ (id)logJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
