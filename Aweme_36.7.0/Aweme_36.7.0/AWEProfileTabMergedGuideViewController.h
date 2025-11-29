@class AWEProfileVacantController, AWEProfileContext, DUXVacantView, UIScrollView, NSString;
@protocol AWEUserProfileTabVCDelegate, AWEProfileBaseContainerProtocol;

@interface AWEProfileTabMergedGuideViewController : UIViewController <UIScrollViewDelegate, AWEUserMessage, AWEProfileVacantDelegate, AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) DUXVacantView *guideView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double lastInsetTop;
@property (retain, nonatomic) AWEProfileVacantController *vacantController;
@property (nonatomic) long long tabType;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (nonatomic) BOOL isFromHome;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (weak, nonatomic) id<AWEProfileBaseContainerProtocol> containerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (id)guideTitle;
- (void)createGuideView;
- (id)profileVacantContainerView:(unsigned long long)a0;
- (void)profileVacantConfig:(id)a0 state:(unsigned long long)a1;
- (double)guideViewMarginBottom;
- (void)trackGuideEvent:(BOOL)a0;
- (void)clickLookButton;
- (id)guideDetail;
- (void)scrollToProvidedServiceVisible:(id /* block */)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (id)user;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)refreshData;

@end
