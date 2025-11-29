@class AWECampaignWatchTaskModel, NSString, AWEAwemeModel;
@protocol AWEUGTaskTriggerDelegate, AWEUGCampaignTaskEvadeVideoProtocol;

@interface AWEUGVideoTaskTrigger : NSObject <AWEUGTaskTriggerProtocol, AWEUGCountDownVideoStatusProtocol>

@property (retain, nonatomic) id<AWEUGCampaignTaskEvadeVideoProtocol> videoEvade;
@property (retain, nonatomic) AWECampaignWatchTaskModel *taskModel;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (weak, nonatomic) id<AWEUGTaskTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)pauseTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)startTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)updateCurrentAwemeModel:(id)a0 playStatus:(unsigned long long)a1;
- (BOOL)canTriggerCountDownForInfo:(id)a0;
- (id)triggerReasonForInfo:(id)a0;
- (BOOL)shouldPauseForModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
