@class AWELiveVSCustomTitleLable, UIImageView;

@interface AWELiveFormatTopDesElement : AWELiveTopElement

@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *topTitle;
@property (retain, nonatomic) UIImageView *topImageView;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_registerFontIfNeed;
- (BOOL)_isFontRegisted;
- (void)updateTitleToPotrait;
- (double)p_topOffSet;
- (void)updateTitleToLandscape;
- (void)p_updatePortraitStream;
- (void)p_updateLandscapeStream;
- (unsigned long long)liveElementType;
- (id)p_previewImageUpURLArray;
- (id)p_previewUpTitle;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
