@interface BXLogger : NSObject

@property (weak, nonatomic) id /* block */ loggerDelegate;
@property (nonatomic) int logLevel;

+ (id)sharedInstance;

- (void)loggerMessage:(id)a0 andLevel:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
