@interface IESMMVideoTransformBaseInfo : NSObject <NSCopying>

@property (nonatomic) float xScale;
@property (nonatomic) float yScale;
@property (nonatomic) float xTranslation;
@property (nonatomic) float yTranslation;
@property (nonatomic) float rotateAngle;
@property (nonatomic) float duration;

- (id)init;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
