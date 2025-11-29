@class AWEAdHintRecord, NSString;

@interface AWEAdHintPersonalRecommendService : HTSService <AWEUserMessage, AWEAdPersonalRecommendSwitchMessage, BDXContainerLifecycleProtocol, AWEAdHintPersonalRecommendService>

@property (retain, nonatomic) AWEAdHintRecord *record;
@property (nonatomic) BOOL hintPopupShowing;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL shouldHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hintRecommendEnableWithExporsure:(BOOL)a0;
+ (id)getHintRecommendDislikeTimesWithExporsure:(BOOL)a0;
+ (void)registerABExperiment;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)onServiceInit;
- (void)containerDidClose:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)shouldShowHintRecommendWithAweme:(id)a0 enterFrom:(id)a1;
- (void)openHintRecommendPopupViewWithAweme:(id)a0 closeCompletion:(id /* block */)a1;
- (void)recordDislikeAwemeIfNeeded:(id)a0;
- (void)updateRecommendStatusWithAweme:(id)a0;
- (void)updateAdPersonalRecommendStatus:(BOOL)a0;
- (void)saveRecord;
- (void)updateShouldHintStatus;
- (void)recordShowHintRecommend;
- (void).cxx_destruct;
- (id)currentKey;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
