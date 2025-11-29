@class NSString;

@interface CloudBackupData_DelOpEntry : WXPBGeneratedMessage

@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long roamDataVersion;
@property (retain, nonatomic) NSString *contactName;
@property (nonatomic) unsigned long long beginTime;
@property (nonatomic) unsigned long long endTime;

+ (void)initialize;

@end
