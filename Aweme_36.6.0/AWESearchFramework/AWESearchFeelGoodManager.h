@class AWESearchFeelGoodSession, NSDictionary, NSString, NSTimer, UIView, AWESearchFeelGoodEntranceView;
@protocol AWEHttpTask;

@interface AWESearchFeelGoodManager : NSObject <AWESearchFeelGoodManagerProtocol>

@property (retain, nonatomic) NSDictionary *feelgoodExtraUserInfo;
@property (retain, nonatomic) AWESearchFeelGoodEntranceView *entranceView;
@property (retain, nonatomic) AWESearchFeelGoodSession *currentSession;
@property (retain, nonatomic) NSDictionary *feelGoodBulletSettings;
@property (weak, nonatomic) id<AWEHttpTask> searchTask;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *requestPath;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) long long predictTimer;
@property (copy, nonatomic) NSString *startTimer;
@property (copy, nonatomic) NSString *endTimer;
@property (retain, nonatomic) UIView *elementView;
@property (copy, nonatomic) id /* block */ entranceViewDidShowBlock;
@property (copy, nonatomic) id /* block */ elementViewDidShowAnimation;
@property (copy, nonatomic) id /* block */ elementViewDidTappedBlock;
@property (copy, nonatomic) id /* block */ feelGoodViewShow;
@property (copy, nonatomic) id /* block */ userDidCloseSurvey;
@property (nonatomic) long long entranceType;
@property (copy, nonatomic) NSString *customAppKey;
@property (copy, nonatomic) NSString *customRequestPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentTimeStr;
+ (id)currentDateInString;
+ (BOOL)searchFeelGoodSupportByteSurveyEnable;

- (void)dismissSurveyEntrance;
- (void)dismissSurveyPopups;
- (void)fetchAvailableFeelgoodSurveyWithSearchTab:(id)a0 model:(id)a1 logExtraDict:(id)a2;
- (void)resumeDelayTimer;
- (void)pauseDelayTimer;
- (void)destoryDelayTimer;
- (void)destoryDelayTimer:(long long)a0;
- (void)showFeelGoodSurveyWithSearchTab:(id)a0 model:(id)a1 logExtraDict:(id)a2;
- (id)feelgoodShowParams:(id)a0 taskId:(id)a1 surveyType:(long long)a2;
- (void)fetchFGWithSubmit:(id)a0 completion:(id /* block */)a1;
- (void)fetchFG:(id)a0 completion:(id /* block */)a1;
- (void)fetchNewFeelGoodRequest:(id)a0 currSession:(id)a1 searchTab:(id)a2 extraUserInfo:(id)a3 model:(id)a4;
- (void)trackSearchUserSurveyEntranceDelayStart;
- (void)openFeelgoodSurvey;
- (void)addSurveyEntranceParams:(long long)a0;
- (void)trackSearchUserSurveyEntranceDelayEnd;
- (id)defaultAppKey;
- (id)defaultRequestPath;
- (void).cxx_destruct;

@end
