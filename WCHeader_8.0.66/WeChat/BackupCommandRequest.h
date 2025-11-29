@class NSData;

@interface BackupCommandRequest : WXPBGeneratedMessage

@property (nonatomic) int command;
@property (retain, nonatomic) NSData *data;

+ (void)initialize;

@end
