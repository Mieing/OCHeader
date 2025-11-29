@class NSString, NSDictionary, BDXBridgeOpenMixVideoSelectChaptersExtraParams, NSNumber;

@interface BDXBridgeOpenMixVideoSelectChaptersParams : BDXBridgeModel

@property (copy, nonatomic) NSString *mix_id;
@property (retain, nonatomic) NSNumber *card_rank;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (retain, nonatomic) BDXBridgeOpenMixVideoSelectChaptersExtraParams *extra_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
