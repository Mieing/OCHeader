@interface AWEPlayInteractionUnreadMentionController : AWEPlayInteractionNewBaseController

@property (nonatomic) BOOL didReportForPlayTimeEvent;

- (void)reportValidStateIfNeeded;
- (void)reportInvalidState;
- (void)reportInValidStateIfNeeded;
- (BOOL)shouldReportValidStateWithModel:(id)a0;
- (BOOL)shouldReportInValidStateWithModel:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)didEndDisplaying;

@end
