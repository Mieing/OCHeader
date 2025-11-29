@class NSNumber;

@interface RTVVoipVideoConfigure : JSONModel

@property (retain, nonatomic) NSNumber *fpsValue;
@property (retain, nonatomic) NSNumber *videoBitRateValue;
@property (retain, nonatomic) NSNumber *gopValue;
@property (retain, nonatomic) NSNumber *widthValue;
@property (retain, nonatomic) NSNumber *heightValue;
@property (retain, nonatomic) NSNumber *audioBitRateValue;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (long long)audioBitrate;
- (id)initWithFPS:(long long)a0 videoBitRate:(long long)a1 videoSize:(struct CGSize { double x0; double x1; })a2;
- (long long)gop;
- (void).cxx_destruct;
- (long long)fps;
- (double)height;
- (double)width;
- (long long)videoBitRate;

@end
