@class NSArray, NSMutableSet, NSString;

@interface AWEFeedGeneralActivityButtonController : NSObject <AWEFeedGeneralActivityButtonControllerProtocol>

@property (copy, nonatomic) NSArray *activityButtonArray;
@property (retain, nonatomic) NSMutableSet *dismissedActivitySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)getDismissedRecordKeyWithActivityType:(id)a0 andActivityTag:(id)a1;
- (id)getCurrentActivityButtonElementWithActivityType:(id)a0 activityTag:(id)a1 addDelayTime:(BOOL)a2;
- (void)updateActivityButtonInfoWithArray:(id)a0;
- (BOOL)shouldShowActivityElementWithActivityType:(id)a0 activityTag:(id)a1 andVideoPlayType:(long long)a2;
- (id)getCurrentActivityButtonModelWithinElement:(id)a0;
- (void)recordDismissActionWithActivityType:(id)a0 andActivityTag:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
