@interface MMLiveEditVideoViewController : WCEditVideoViewController

- (void)showEditVideoViewOn:(id)a0;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (double)maxVideoDuration;

@end
