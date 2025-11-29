@class NSString, WCFinderFeedDetailStatusView;

@interface WCFinderLimitWarningViewController : MMUIViewController <WCFinderFeedDetailStatusViewDelegate>

@property (retain, nonatomic) WCFinderFeedDetailStatusView *statusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)onClickCloseLeftItem;
- (void)didClickBack:(id)a0;
- (void).cxx_destruct;

@end
