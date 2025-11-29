@class CloudBackupData_RoamConfig, NSMutableArray;

@interface CloudBackupData : WXPBGeneratedMessage

@property (retain, nonatomic) CloudBackupData_RoamConfig *config;
@property (retain, nonatomic) NSMutableArray *delOps;
@property (retain, nonatomic) NSMutableArray *roamDatas;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSMutableArray *mediaMaps;
@property (retain, nonatomic) NSMutableArray *compresses;
@property (retain, nonatomic) NSMutableArray *encryptKeys;

+ (void)initialize;

@end
