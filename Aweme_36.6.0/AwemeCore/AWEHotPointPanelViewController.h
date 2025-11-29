@class AWEHotPointPanelTableViewController, NSString, UILabel, UIPanGestureRecognizer, UIViewController;
@protocol AWEHotPointPanelControllerProtocol;

@interface AWEHotPointPanelViewController : AWEHotPointPanelBaseViewController <UIGestureRecognizerDelegate> {
    UIViewController<AWEHotPointPanelControllerProtocol> *_panelViewController;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *handlerPanGes;
@property (retain, nonatomic) AWEHotPointPanelTableViewController *tableVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelViewController;
- (void)setPanelViewController:(id)a0;
- (id)closeButtonImage;
- (void)updatePanelLayoutWithCurrentModel:(id)a0;
- (BOOL)shouldShowHotWordsRecommend;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)doSpecificUIConfig;
- (long long)effectViewStyle;
- (void).cxx_destruct;
- (double)titleHeight;
- (id)titleLabelText;

@end
