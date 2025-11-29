@class NSError;

@interface BDPolicyStrategyResult : NSObject

@property (nonatomic) BOOL noCert;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL treatErrorAsWarning;
@property (nonatomic) BOOL stopValidate;
@property (nonatomic) BOOL ignoreCustomErrorStrategy;
@property (retain, nonatomic) id data;

- (void).cxx_destruct;

@end
