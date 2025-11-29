@class VEAlgorithmOutputMomentAIM, VEAlgorithmOutputImage, VEAlgorithmOutputMomentTIM, VEAlgorithmOutputMVMoment;

@interface VEAlgorithmOutput : NSObject

@property (retain, nonatomic) VEAlgorithmOutputImage *imgMomentOutput;
@property (retain, nonatomic) VEAlgorithmOutputMVMoment *mvMomentOutput;
@property (retain, nonatomic) VEAlgorithmOutputMomentAIM *momentAIMOutput;
@property (retain, nonatomic) VEAlgorithmOutputMomentTIM *momentTIMOutput;

- (void).cxx_destruct;

@end
