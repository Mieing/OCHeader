@class NSDictionary, NSString, AWEAwemeModel;

@interface AWESurveyTracker : NSObject <AWESurveyTrackerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)initWith:(id)a0 logExtra:(id)a1;
- (void)trackLoadResult:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)trackSurveyQuitWithParams:(id)a0;
- (void)trackSurveyShow:(long long)a0 errorMsg:(id)a1;
- (void)trackToastShow;
- (void)trackSurveyQuit;
- (void).cxx_destruct;

@end
