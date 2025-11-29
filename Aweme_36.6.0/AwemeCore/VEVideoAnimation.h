@class NSString, IESMMCanvasAnimatedInfo;

@interface VEVideoAnimation : NSObject <NSCopying>

@property (retain, nonatomic) IESMMCanvasAnimatedInfo *animatedInfo;
@property (copy, nonatomic) NSString *blendMode;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
