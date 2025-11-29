@class NSNumber, HMDFrameDropRecord;

@interface IESLivePrefSampleUIDropInfo : NSObject

@property (copy, nonatomic) NSNumber *generateTime;
@property (retain, nonatomic) HMDFrameDropRecord *dropRecord;

- (void).cxx_destruct;

@end
