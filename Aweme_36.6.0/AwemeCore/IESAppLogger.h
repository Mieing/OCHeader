@class NSString;

@interface IESAppLogger : NSObject

@property BOOL initFlag;
@property BOOL isAbroad;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) id /* block */ appLogTrackerBlock;

+ (id)sharedInstance;

- (void)appLogOnEvent:(id)a0 params:(id)a1 eventType:(id)a2;
- (void)appLogOnEvent:(id)a0 params:(id)a1 eventType:(id)a2 uploadToBusiness:(BOOL)a3;
- (void)appLogOnEventToBussiness:(id)a0 params:(id)a1 eventType:(id)a2;
- (void)setAppLogCallback:(id)a0 callback:(id /* block */)a1 isAbroad:(BOOL)a2;
- (void).cxx_destruct;

@end
