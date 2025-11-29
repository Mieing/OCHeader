@class NSDictionary;

@interface HMDCrashRegisters : HMDCrashModel

@property (copy, nonatomic) NSDictionary *registers;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
