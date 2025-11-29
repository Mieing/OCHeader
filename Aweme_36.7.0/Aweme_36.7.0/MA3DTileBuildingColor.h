@class UIColor;

@interface MA3DTileBuildingColor : NSObject

@property (nonatomic) long long buildingType;
@property (retain, nonatomic) UIColor *color;

- (id)initWithBuildingType:(long long)a0 color:(id)a1;
- (void).cxx_destruct;

@end
