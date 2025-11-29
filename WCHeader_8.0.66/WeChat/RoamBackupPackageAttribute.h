@interface RoamBackupPackageAttribute : WXPBGeneratedMessage

@property (nonatomic) unsigned long long sizeByte;
@property (nonatomic) unsigned int prevBackupTime;

+ (void)initialize;

- (void)setPrevBackupTime:(unsigned int)a0;
- (unsigned int)prevBackupTime;
- (void)setSizeByte:(unsigned long long)a0;
- (unsigned long long)sizeByte;

@end
