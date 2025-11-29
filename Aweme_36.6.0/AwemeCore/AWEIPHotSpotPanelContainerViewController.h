@class UILabel, NSAttributedString, UIViewController;
@protocol AWEHotPointPanelControllerProtocol;

@interface AWEIPHotSpotPanelContainerViewController : AWEHotPointPanelBaseViewController {
    UIViewController<AWEHotPointPanelControllerProtocol> *_panelViewController;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSAttributedString *titleAttributedStr;
@property (nonatomic) BOOL isRecommendViewShowing;

- (id)panelViewController;
- (void)setPanelViewController:(id)a0;
- (void)setupBinding;
- (id)currentTabManager;
- (id)currentTabRecommendManager;
- (void)updatePanelLayoutWithCurrentModel:(id)a0;
- (void)refreshWithData:(id)a0 risingHotSpotList:(id)a1 paramsModel:(id)a2 otherParams:(id)a3;
- (void)doSpecificUIConfig;
- (id)panelScrollView;
- (double)totalPanelViewHeight;
- (void).cxx_destruct;
- (double)titleHeight;
- (void)viewDidLoad;

@end
