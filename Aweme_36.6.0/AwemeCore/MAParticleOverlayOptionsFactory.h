@interface MAParticleOverlayOptionsFactory : NSObject

+ (id)generateSunParticles;
+ (id)generateRainParticle;
+ (id)generateSnowParticle;
+ (id)generateFogHazeParticles;
+ (id)particleOverlayOptionsWithType:(long long)a0;

@end
