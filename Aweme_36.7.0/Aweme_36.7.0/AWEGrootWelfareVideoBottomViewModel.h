@interface AWEGrootWelfareVideoBottomViewModel : AWEFeedSpeciesBottomViewModel

@property (nonatomic) BOOL hasReportBottomBarShow;
@property (nonatomic) BOOL hasReportDonateBtnShow;

- (void)trackForShowAction;
- (id)getSunValue;
- (void)trackForEvent:(id)a0;
- (id)getVideoPlayTime;

@end
