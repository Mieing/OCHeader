@class NSString, NSMutableArray, AWENearbyGrouponFeedShowFeedbackTask;

@interface AWENearbyGrouponFeedFeedbackPlugin : AWENearbyGrouponFeedBasePlugin <AWENearbyGrouponFeedShowFeedbackTaskDelegate>

@property (retain, nonatomic) AWENearbyGrouponFeedShowFeedbackTask *currentTask;
@property (retain, nonatomic) NSMutableArray *delayedReleaseTaskPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryHideFeedbackViewOnFeedComponent:(id)a0;
- (void)showFeedbackViewOnFeedComponent:(id)a0 longPressGestureRecognizer:(id)a1;
- (void)removeFeedback:(id)a0;
- (void)didFinishLoadFeedbackLynxView:(id)a0;
- (void)didLoadFailedFeedbackLynxView:(id)a0;
- (void)didClickCloseFeedbackButton:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)taskDidFinish:(id)a0;
- (void)hideFeedbackView;

@end
