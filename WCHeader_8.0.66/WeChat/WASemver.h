@class NSArray, NSNumber, NSString;

@interface WASemver : MMObject <WeAppCore.SemverProtocol>

@property (retain, nonatomic) NSArray *arrVersion;
@property (retain, nonatomic) NSNumber *major;
@property (retain, nonatomic) NSNumber *minor;
@property (retain, nonatomic) NSNumber *patch;
@property (readonly, nonatomic) NSString *originalStr;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithVersionStr:(id)a0;
- (void)parse:(id)a0;
- (BOOL)checkIsValid;
- (BOOL)isSatisfiedBy:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)isLessThan:(id)a0;
- (BOOL)isGreaterThan:(id)a0;
- (id)getExtrapolateVersion;
- (void).cxx_destruct;

@end
