@class AWESearchHistoryComponent, NSString, UIView;

@interface AWESearchHomePageHistoryViewController : UIViewController <AWEUserMessage, AWESearchHomePageSideBarViewControllerProtocol>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWESearchHistoryComponent *historyComponent;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSString *showPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)sliderMenuWidth;

- (void)didFinishLoginWithUid:(id)a0;
- (void)dismissAnimation:(id)a0;
- (void)updateViewsWithOriginX:(double)a0;
- (void)sideBarDidOpen;
- (id)historyComponentParams;
- (void)sideBarWillOpen:(id)a0;
- (void)sideBarCancelOpen;
- (void)sideBarWillClose;
- (void)sideBarDidClose;
- (void)sideBarCancelClose;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
