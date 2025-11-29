@class NSError;

@interface VEAlgorithmSessionResult : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithSessionType:(long long)a0;

@end
