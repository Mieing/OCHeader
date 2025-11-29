@class NSString;

@interface WXGBackupRecoverSessionInfo : NSObject

@property (copy, nonatomic) NSString *sessionName;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

- (void).cxx_destruct;

@end
