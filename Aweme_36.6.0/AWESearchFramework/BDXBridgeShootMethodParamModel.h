@class NSNumber, NSDictionary;

@interface BDXBridgeShootMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *use_lyris;
@property (copy, nonatomic) NSDictionary *music;
@property (copy, nonatomic) NSDictionary *music_extra;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
