@class NSMutableArray;

@interface ACCAssetImageGeneratorTracker : NSObject

@property (retain, nonatomic) NSMutableArray *clipDurationArray;

+ (id)getSceneOfType:(unsigned long long)a0;
+ (void)trackAssetImageGeneratorWithType:(unsigned long long)a0 frames:(long long)a1 beginTime:(double)a2 extra:(id)a3;
+ (void)trackAssetImageGeneratorWithType:(unsigned long long)a0 durations:(id)a1 extra:(id)a2;

- (void).cxx_destruct;

@end
