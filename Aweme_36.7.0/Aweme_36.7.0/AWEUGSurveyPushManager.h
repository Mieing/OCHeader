@class NSMutableDictionary;

@interface AWEUGSurveyPushManager : NSObject

@property (nonatomic) BOOL hasStarted;
@property (nonatomic) BOOL needStartTaskWhenSettingsUpdated;
@property (retain, nonatomic) NSMutableDictionary *tasks;

+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)startTasksOnFeedReady;
- (void)restartTasksIfNeeded;
- (void)stopTasks;
- (void)surveyShowed:(id)a0;
- (void).cxx_destruct;
- (void)startTasks;

@end
