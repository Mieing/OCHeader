@class NSString;

@interface IESLiveLinkRTCWaterMarkRegion : NSObject

@property (copy, nonatomic) NSString *waterMarkId;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float w;
@property (nonatomic) float h;
@property (nonatomic) long long zOrder;
@property (nonatomic) long long alpha;
@property (nonatomic) long long renderMode;
@property (nonatomic) struct __CVBuffer { } *imageData;

- (id)initWithId:(id)a0 WithX:(float)a1 withY:(float)a2 withW:(float)a3 withH:(float)a4 withZorder:(long long)a5 withAlpha:(long long)a6 withMode:(long long)a7 withPixelBuffer:(struct __CVBuffer { } *)a8;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
