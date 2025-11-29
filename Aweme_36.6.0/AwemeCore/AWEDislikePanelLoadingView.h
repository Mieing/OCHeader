@class DUXButton, UIView;
@protocol AWEUILoadingViewProtocol;

@interface AWEDislikePanelLoadingView : UIView

@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)didClickedClose;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;

@end
