@interface MA3DTileBuildingMaterialOption : NSObject

@property (nonatomic) long long buildingType;
@property (nonatomic) double metallicFactor;
@property (nonatomic) double roughnessFactor;

- (id)initWithBuildingType:(long long)a0 metallicFactor:(double)a1 roughnessFactor:(double)a2;

@end
