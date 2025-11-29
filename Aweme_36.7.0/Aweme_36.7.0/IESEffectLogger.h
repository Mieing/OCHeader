@protocol IESEffectLoggerProtocol;

@interface IESEffectLogger : NSObject

@property (class, retain, nonatomic) IESEffectLogger *defaultLogger;

@property (retain, nonatomic) id<IESEffectLoggerProtocol> loggerProxy;

- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)logType:(long long)a0 withMessage:(id)a1;
- (void).cxx_destruct;

@end
