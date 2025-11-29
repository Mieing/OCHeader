@class NSString, NSMutableArray;

@interface AMapTTYLogHandler : AMapLogHandler {
    char *_app;
    unsigned long long _appLen;
    char *_pid;
    unsigned long long _pidLen;
}

@property (retain, nonatomic) NSMutableArray *enableComponents;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *processID;
@property (nonatomic) BOOL automaticallyAppendNewlineForCustomFormatters;

+ (id)sharedInstance;

- (id)initWithSingleton;
- (void)setComponentConsoleEnable:(id)a0 enable:(BOOL)a1;
- (id)loggerName;
- (id)componentName;
- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)a0;

@end
