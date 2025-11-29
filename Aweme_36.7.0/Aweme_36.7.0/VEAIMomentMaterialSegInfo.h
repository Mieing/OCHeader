@class NSString;

@interface VEAIMomentMaterialSegInfo : NSObject

@property (copy, nonatomic) NSString *fragmentId;
@property (nonatomic) long long materialId;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (nonatomic) struct VEAIMomentReframeFrame { double centerX; double centerY; double width; double height; double rotateAngle; } clipFrame;

- (void).cxx_destruct;

@end
