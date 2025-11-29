@class NSString;

@interface ABKTextStickerShadowStyle : NSObject

@property (copy, nonatomic) NSString *shadowColor;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) long long shadowAngle;
@property (nonatomic) long long shadowDistance;

- (void).cxx_destruct;
- (id)init;

@end
