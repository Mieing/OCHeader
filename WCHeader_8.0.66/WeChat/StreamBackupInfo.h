@class NSMutableArray;

@interface StreamBackupInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int validTime;
@property (nonatomic) unsigned int clearFlag;

+ (void)initialize;

@end
