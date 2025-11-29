@class NSArray, NSString;

@interface SECNet3rdDetector : NSObject <SECNetProtector>

@property (copy, nonatomic) NSArray *exemptionHost;
@property (copy, nonatomic) NSString *exemptionRule;
@property (copy, nonatomic) NSArray *contentDetectors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)resolveConfig:(id)a0;
- (id)protect:(id)a0 withEvent:(id)a1;
- (BOOL)shouldHandle:(id)a0;
- (id)shouldExempt:(id)a0;
- (void).cxx_destruct;

@end
