@interface MMTextStateEditVideoViewController : WCEditVideoViewController

- (void)showEditVideoViewOn:(id)a0;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (float)maxDuration;

@end
