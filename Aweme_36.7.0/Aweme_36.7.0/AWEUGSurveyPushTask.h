@class AWEUGSurveyPushModel, NSTimer, NSString;

@interface AWEUGSurveyPushTask : NSObject

@property (retain, nonatomic) AWEUGSurveyPushModel *model;
@property (nonatomic) double timeDelay;
@property (nonatomic) BOOL skipLoginCheck;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *surveyID;
@property (nonatomic) long long state;

- (void)surveyShowed:(id)a0;
- (void)restartPushTaskIfNeeded;
- (BOOL)checkInfoValidated;
- (BOOL)canRequestSurveyInnerPush;
- (void)requestSurveyInnerPush;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithConfig:(id)a0;

@end
