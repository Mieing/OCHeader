@class NSString;

@interface NPRecommendReframe : MTLModel <MTLJSONSerializing>

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double rotateAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cropPoints;
- (id)initWithReframe:(struct VEAIMomentReframeFrame { double x0; double x1; double x2; double x3; double x4; })a0;

@end
