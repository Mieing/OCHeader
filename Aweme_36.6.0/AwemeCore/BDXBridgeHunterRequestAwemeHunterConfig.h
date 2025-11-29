@class NSNumber, NSString;

@interface BDXBridgeHunterRequestAwemeHunterConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *shareAwemeList;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *awemeListPath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
