@class NSString;

@interface DefaultVCABRModule : NSObject <IVCABRModule>

@property (nonatomic) void *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFloatValue:(float)a0 forKey:(int)a1;
- (void)configWithParams:(id)a0;
- (void)setMediaInfo:(id)a0 withAudio:(id)a1;
- (void)setInfoListener:(id)a0;
- (id)onceSelect:(int)a0 scene:(int)a1;
- (id)getPredict;
- (void)start:(int)a0 intervalMs:(int)a1;
- (void)setIntValue:(int)a0 forKey:(int)a1;
- (void)setLongValue:(long long)a0 forKey:(int)a1;
- (void)addBufferInfo:(long long)a0 streamKey:(id)a1 bitrate:(long long)a2 availSize:(long long)a3 headSize:(long long)a4;
- (id)initWithAlgoType:(long long)a0;
- (void)setDoubleValue:(double)a0 forKey:(int)a1;
- (void)stop;
- (void)setStringValue:(id)a0 forKey:(int)a1;
- (void)dealloc;

@end
