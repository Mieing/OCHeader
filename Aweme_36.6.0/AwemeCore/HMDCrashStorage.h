@interface HMDCrashStorage : HMDCrashModel

@property (nonatomic) unsigned long long free;
@property (nonatomic) unsigned long long total;

- (void)updateWithDictionary:(id)a0;

@end
