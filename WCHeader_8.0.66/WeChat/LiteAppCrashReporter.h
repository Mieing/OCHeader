@class NSMutableArray;

@interface LiteAppCrashReporter : NSObject

@property (retain, nonatomic) NSMutableArray *datas;
@property (copy, nonatomic) id /* block */ currentLiteAppChangedBlock;
@property (copy, nonatomic) id /* block */ crashReportExtraInfoChangedBlock;

+ (id)sharedInstance;

- (id)init;
- (void)addLiteApp:(id)a0;
- (void)removeLiteApp:(id)a0;
- (id)crashReportExtraInfo;
- (id)currentLiteApp;
- (void)setCurrentLiteAppChangedNotificationBlock:(id /* block */)a0;
- (void)setCrashReportExtraInfoChangedNotificationBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
