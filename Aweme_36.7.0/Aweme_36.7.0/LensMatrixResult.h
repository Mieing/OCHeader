@class NSString;

@interface LensMatrixResult : NSObject

@property (copy, nonatomic) NSString *matrixJson;
@property (nonatomic) int matrixNum;
@property (nonatomic) int real_radius;
@property (nonatomic) float real_crop_ratio;

- (void).cxx_destruct;

@end
