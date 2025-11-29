@class NSString, NSArray;

@interface HMDCrashRuntimeInfo : HMDCrashModel

@property (copy, nonatomic) NSString *selector;
@property (copy, nonatomic) NSArray *crashInfos;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
