@class AWEGrouponLifeFeedsShowFeedbackTask, NSMutableArray, NSString;

@interface AWEGrouponLifeFeedsFeedBackPlugin : AWEGrouponLifeFeedsBasePlugin <AWEGrouponLifeFeedsShowFeedbackTaskDelegate>

@property (retain, nonatomic) AWEGrouponLifeFeedsShowFeedbackTask *currentTask;
@property (retain, nonatomic) NSMutableArray *delayedReleaseTaskPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryHideFeedbackViewOnFeedComponent:(id)a0;
- (void)removeFeedback:(id)a0;
- (void)didFinishLoadFeedbackLynxView:(id)a0;
- (void)didLoadFailedFeedbackLynxView:(id)a0;
- (void)didClickCloseFeedbackButton:(id)a0;
- (void)didLongPressComponentView:(id)a0 viewModel:(id)a1 longPress:(id)a2;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void).cxx_destruct;
- (void)taskDidFinish:(id)a0;
- (void)hideFeedbackView;

@end
