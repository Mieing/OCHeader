@class NSString;

@interface CloudBackupData_RoamDataEntry : WXPBGeneratedMessage

@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *contactName;
@property (nonatomic) unsigned long long beginTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long curTotalSize;
@property (nonatomic) unsigned int dataSize;
@property (nonatomic) unsigned int indexSize;

+ (void)initialize;

@end
