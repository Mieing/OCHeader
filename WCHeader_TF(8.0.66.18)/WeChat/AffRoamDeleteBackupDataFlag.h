@class NSMutableArray;

@interface AffRoamDeleteBackupDataFlag : WXPBGeneratedMessage

@property (nonatomic) BOOL deleteAll;
@property (nonatomic) BOOL deletePackage;
@property (retain, nonatomic) NSMutableArray *convId;

+ (void)initialize;

@end
