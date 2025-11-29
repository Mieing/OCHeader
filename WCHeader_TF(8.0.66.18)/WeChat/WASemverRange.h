@class WASemver;

@interface WASemverRange : NSObject

@property (retain, nonatomic) WASemver *semver;
@property (nonatomic) unsigned long long op;

- (id)initWithVersion:(id)a0 op:(unsigned long long)a1;
- (id)initWithVersionStr:(id)a0 op:(unsigned long long)a1;
- (BOOL)isSatisfiedBy:(id)a0;
- (void).cxx_destruct;

@end
