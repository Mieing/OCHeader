@class NSNumber, NSString;

@interface BDXBridgeLocalLifePreloadPoiDetailPreloadConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *platformType;
@property (retain, nonatomic) NSNumber *smartPrefetchType;
@property (retain, nonatomic) NSNumber *cacheDuration;
@property (copy, nonatomic) NSString *poiBackendType;
@property (retain, nonatomic) NSNumber *pageStyleIsHalf;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
