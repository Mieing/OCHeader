@class NSString, NSNumber;

@interface BDXBridgeOpenPlatformShowOpenShareMusicParamObject : BDXBridgeModel

@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSNumber *start;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
