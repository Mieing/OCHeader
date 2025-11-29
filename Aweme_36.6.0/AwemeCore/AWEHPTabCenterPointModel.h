@interface AWEHPTabCenterPointModel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } adjustedCenterPoint;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long result;

@end
