@class NSString;

@interface V2TXLiveLogConfig : NSObject <NSCopying>

@property (nonatomic) long long logLevel;
@property (nonatomic) BOOL enableObserver;
@property (nonatomic) BOOL enableConsole;
@property (nonatomic) BOOL enableLogFile;
@property (copy, nonatomic) NSString *logPath;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
