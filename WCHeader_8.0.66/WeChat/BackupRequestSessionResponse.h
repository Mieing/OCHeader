@class NSMutableArray;

@interface BackupRequestSessionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *sessionName;
@property (retain, nonatomic) NSMutableArray *timeInterval;

+ (void)initialize;

@end
