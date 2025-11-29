@interface BDXBridgeMuteLiveRoomMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL stopLivePlay;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

@end
