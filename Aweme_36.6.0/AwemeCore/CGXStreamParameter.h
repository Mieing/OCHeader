@interface CGXStreamParameter : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long maxBitrate;
@property (nonatomic) long long minBitrate;

- (id)initWithWidth:(long long)a0 height:(long long)a1 fps:(long long)a2 maxBitrate:(long long)a3 minBitrate:(long long)a4;

@end
