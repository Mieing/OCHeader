@class NSString;

@interface HMDCrashHeaderInfo : HMDCrashModel

@property (nonatomic) unsigned long long faultAddr;
@property (nonatomic) double crashTime;
@property (nonatomic) int crashType;
@property (copy, nonatomic) NSString *typeStr;
@property (nonatomic) int mach_type;
@property (nonatomic) long long mach_code;
@property (nonatomic) long long mach_subcode;
@property (nonatomic) int signum;
@property (nonatomic) int sigcode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
