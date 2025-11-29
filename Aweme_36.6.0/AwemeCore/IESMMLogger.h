@class NSString, NSDate;
@protocol IESEditorLoggerDelegate;

@interface IESMMLogger : NSObject

@property (copy, nonatomic) id /* block */ fabricLogBlock;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL getAWECommand;
@property (nonatomic) BOOL logEnable;
@property (retain, nonatomic) NSString *sign;
@property (weak, nonatomic) id<IESEditorLoggerDelegate> loggerDelegate;
@property (nonatomic) int logLevel;

+ (void)bef_effect_set_log_level:(int)a0;
+ (id)sharedInstance;

- (void)__updateEffectLogCallbackFunc;
- (int)caculateLogLevel:(id)a0;
- (void)disableVESDKLoggerAction;
- (void)enableVESDKLoggerAction;
- (BOOL)execCloudControlCommand:(id)a0;
- (void)loggerMessage:(id)a0 andLevel:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
