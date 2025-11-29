@class VEAlgorithmSessionParams;

@interface VEAlgorithmSessionConfig : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) VEAlgorithmSessionParams *params;

- (void).cxx_destruct;
- (id)init;

@end
