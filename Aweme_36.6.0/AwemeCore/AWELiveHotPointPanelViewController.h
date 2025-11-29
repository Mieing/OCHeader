@class UIImageView, AWELiveHotPointPanelTableViewController, UIView;

@interface AWELiveHotPointPanelViewController : AWEHotPointPanelViewController

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWELiveHotPointPanelTableViewController *liveHotVC;
@property (retain, nonatomic) UIView *separateLine;
@property (nonatomic) BOOL cellEnableClick;

- (id)panelViewController;
- (BOOL)shouldShowHotWordsRecommend;
- (void)doSpecificUIConfig;
- (double)totalPanelViewHeight;
- (void).cxx_destruct;
- (double)titleHeight;
- (double)containerHeight;

@end
