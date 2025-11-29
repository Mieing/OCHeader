@interface LVVideoCompressConfig : NSObject

@property (nonatomic) long long maxFps;
@property (nonatomic) long long maxResolution;
@property (nonatomic, getter=isIgnore) BOOL ignore;
@property (nonatomic) BOOL transcodeHDR10Bit;
@property (nonatomic) unsigned long long preference;

+ (id)defaultConfig;

- (id)initWithFps:(long long)a0 resolution:(long long)a1;
- (id)initWithFps:(long long)a0 resolution:(long long)a1 transcodeHDR10Bit:(BOOL)a2;
- (id)initWithFps:(long long)a0 resolution:(long long)a1 transcodeHDR10Bit:(BOOL)a2 preference:(unsigned long long)a3;

@end
