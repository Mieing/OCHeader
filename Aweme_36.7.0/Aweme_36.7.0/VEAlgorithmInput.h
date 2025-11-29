@class VEAlgorithmInputMomentTIM, VEAlgorithmInputMomentAIM, VEAlgorithmInputMVMoment, VEAlgorithmInputData;

@interface VEAlgorithmInput : NSObject

@property (retain, nonatomic) VEAlgorithmInputData *inputData;
@property (retain, nonatomic) VEAlgorithmInputMVMoment *mvMomentInput;
@property (retain, nonatomic) VEAlgorithmInputMomentAIM *momentAIMInput;
@property (retain, nonatomic) VEAlgorithmInputMomentTIM *momentTIMInput;

- (void).cxx_destruct;

@end
