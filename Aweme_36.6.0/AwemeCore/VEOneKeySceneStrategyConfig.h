@class NSString;

@interface VEOneKeySceneStrategyConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *modelPath;
@property (nonatomic) BOOL disableDenoise;
@property (nonatomic) int sceneCase;
@property (nonatomic) long long asfMode;
@property (nonatomic) long long hdrMode;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
