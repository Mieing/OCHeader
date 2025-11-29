@class NSString;

@interface WCFinderHeatUpSwitchGuideViewController : WCFinderCustomPanelSheet

@property (copy, nonatomic) NSString *tid;

- (id)initWithTid:(id)a0;
- (id)loadContentView;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (long long)closeButtonStyle;
- (void).cxx_destruct;

@end
