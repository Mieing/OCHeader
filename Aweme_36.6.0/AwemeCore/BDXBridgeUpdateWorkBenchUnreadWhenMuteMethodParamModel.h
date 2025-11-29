@class NSNumber;

@interface BDXBridgeUpdateWorkBenchUnreadWhenMuteMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *cardType;
@property (nonatomic) BOOL isMute;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
