@class NSString;

@interface BTMSpecManager : NSObject

@property (class, readonly, nonatomic) BTMSpecManager *shared;

@property (nonatomic) unsigned long long specs;
@property (nonatomic) BOOL checkFinished;
@property (copy, nonatomic) NSString *version;

- (BOOL)isSpecDeployed:(unsigned long long)a0;
- (void)checkSpecs;
- (void).cxx_destruct;

@end
