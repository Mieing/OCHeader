@class WATitleView, UIColor, MMUIButton;

@interface WASimulatedNativeWeAppLoadingViewController : WALoadingViewController {
    MMUIButton *_returnButton;
    WATitleView *_titleView;
    long long _orientation;
    UIColor *_navigationBarTextColor;
    unsigned long long _leftBtnType;
}

@property (nonatomic) BOOL sheetModeShouldHideLeftReturnButton;
@property (nonatomic) BOOL isSinglePageMode;

- (id)initWithContact:(id)a0;
- (id)initWithContact:(id)a0 isSinglePageMode:(BOOL)a1;
- (id)initWithContact:(id)a0 leftBtnType:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)showTitleLoading;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
