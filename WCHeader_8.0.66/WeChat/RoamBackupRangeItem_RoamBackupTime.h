@interface RoamBackupRangeItem_RoamBackupTime : WXPBGeneratedMessage

@property (nonatomic) unsigned long long beginTimeMs;
@property (nonatomic) unsigned long long endTimeMs;

+ (void)initialize;

- (void)setEndTimeMs:(unsigned long long)a0;
- (unsigned long long)endTimeMs;
- (void)setBeginTimeMs:(unsigned long long)a0;
- (unsigned long long)beginTimeMs;

@end
