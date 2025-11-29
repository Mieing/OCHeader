@class RoamBackupRange, NSString, RoamDevice, RoamBackupPackageAttribute;

@interface RoamBackupPackage : WXPBGeneratedMessage

@property (nonatomic) unsigned long long packageId;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) RoamDevice *targetDevice;
@property (retain, nonatomic) NSString *sourceDeviceId;
@property (retain, nonatomic) RoamBackupRange *backupRange;
@property (nonatomic) unsigned int backupOption;
@property (retain, nonatomic) NSString *uniquePackageId;
@property (retain, nonatomic) RoamBackupPackageAttribute *attribute;

+ (void)initialize;

- (void)setAttribute:(id)a0;
- (id)attribute;
- (void)setUniquePackageId:(id)a0;
- (id)uniquePackageId;
- (void)setBackupOption:(unsigned int)a0;
- (unsigned int)backupOption;
- (void)setBackupRange:(id)a0;
- (id)backupRange;
- (void)setSourceDeviceId:(id)a0;
- (id)sourceDeviceId;
- (void)setTargetDevice:(id)a0;
- (id)targetDevice;
- (void)setPackageName:(id)a0;
- (id)packageName;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setPackageId:(unsigned long long)a0;
- (unsigned long long)packageId;

@end
