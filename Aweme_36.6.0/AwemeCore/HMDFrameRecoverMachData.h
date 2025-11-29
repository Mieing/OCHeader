@class NSString, NSPointerArray;

@interface HMDFrameRecoverMachData : NSObject

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSPointerArray *backtraces;

- (void).cxx_destruct;

@end
