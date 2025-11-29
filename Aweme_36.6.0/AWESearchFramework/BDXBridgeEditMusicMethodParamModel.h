@class NSDictionary, NSNumber;

@interface BDXBridgeEditMusicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *music;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
