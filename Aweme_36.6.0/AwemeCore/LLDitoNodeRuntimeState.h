@interface LLDitoNodeRuntimeState : NSObject

@property (nonatomic) BOOL isInvalidPresetHeight;
@property (nonatomic) double presetHeight;
@property (nonatomic) double cachePresetHeight;
@property (nonatomic) BOOL isHitCachePresetHeight;

@end
