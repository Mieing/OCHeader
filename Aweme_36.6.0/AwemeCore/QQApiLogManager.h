@interface QQApiLogManager : NSObject

@property (copy, nonatomic) id /* block */ logBlock;
@property (nonatomic) BOOL switch_addLogToFile;

+ (id)getInstance;

- (void)stopLog;
- (void)startLogWithBlock:(id /* block */)a0;
- (void)callbackLog:(id)a0;
- (void)setSwitchPrintLogToFile:(BOOL)a0;
- (void).cxx_destruct;
- (id)getLogFilePath;

@end
