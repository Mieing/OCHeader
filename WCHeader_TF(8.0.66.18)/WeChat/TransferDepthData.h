@class UIImage;

@interface TransferDepthData : NSObject

@property (retain, nonatomic) UIImage *depthImage;
@property (nonatomic) float median;

- (void).cxx_destruct;

@end
