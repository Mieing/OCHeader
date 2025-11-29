@interface HMDCrashProcessState : HMDCrashModel

@property (nonatomic) unsigned long long freeBytes;
@property (nonatomic) unsigned long long appUsedBytes;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long usedBytes;
@property (nonatomic) unsigned long long usedVirtualMemory;
@property (nonatomic) unsigned long long totalVirtualMemory;

- (void)updateWithDictionary:(id)a0;

@end
