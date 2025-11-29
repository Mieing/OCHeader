@interface MAVVLogDirector : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;

- (id)init;
- (void)setSize:(int)a0 height:(int)a1;
- (void)setOutputSize:(int)a0 height:(int)a1;
- (void)setEffectManager:(id)a0;
- (void)addInputTexture:(id)a0;
- (void)render:(int)a0 pts:(long long)a1;

@end
