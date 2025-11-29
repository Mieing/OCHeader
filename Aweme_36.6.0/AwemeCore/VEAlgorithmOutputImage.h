@class VEAlgorithmOUtputImageFaceClustering, VEAlgorithmOutputImageC3Feature, VEAlgorithmOutputImagePorn;

@interface VEAlgorithmOutputImage : NSObject

@property (retain, nonatomic) VEAlgorithmOutputImageC3Feature *c3Out;
@property (retain, nonatomic) VEAlgorithmOutputImagePorn *pornOut;
@property (retain, nonatomic) VEAlgorithmOUtputImageFaceClustering *faceClusterOut;

- (void).cxx_destruct;

@end
