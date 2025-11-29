@class NSMutableArray, RoamBackupRangeItem_ContactFilter;

@interface RoamBackupRangeItem : WXPBGeneratedMessage

@property (retain, nonatomic) RoamBackupRangeItem_ContactFilter *includeFilter;
@property (retain, nonatomic) RoamBackupRangeItem_ContactFilter *excludeFilter;
@property (retain, nonatomic) NSMutableArray *backupTimes;

+ (void)initialize;

- (void)setBackupTimes:(id)a0;
- (id)backupTimes;
- (void)setExcludeFilter:(id)a0;
- (id)excludeFilter;
- (void)setIncludeFilter:(id)a0;
- (id)includeFilter;

@end
