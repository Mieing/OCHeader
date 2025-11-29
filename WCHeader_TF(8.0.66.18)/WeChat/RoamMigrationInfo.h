@class NSString;

@interface RoamMigrationInfo : WXPBGeneratedMessage

@property (nonatomic) int supportExt;
@property (nonatomic) BOOL isTextOnly;
@property (nonatomic) unsigned long long predictSize;
@property (nonatomic) int pairedDevice;
@property (retain, nonatomic) NSString *connectedIp;

+ (void)initialize;

@end
