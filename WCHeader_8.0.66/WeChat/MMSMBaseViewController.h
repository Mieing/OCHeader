@class UILabel, UIActivityIndicatorView, UIView;

@interface MMSMBaseViewController : UIViewController {
    UIView *m_contentView;
    UILabel *m_titleLabel;
    UILabel *m_bodyLabel;
    UIView *m_loadingBgView;
    UIView *m_loadingBgViewSmall;
    UIActivityIndicatorView *m_loadingView;
}

@property (readonly, nonatomic) unsigned long long scene;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isEnglish;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (id)genBigGreenButton;
- (id)genBigGrayButton;
- (id)genBigButton;
- (void).cxx_destruct;

@end
