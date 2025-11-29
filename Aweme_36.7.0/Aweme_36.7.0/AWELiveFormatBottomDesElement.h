@class AWELiveVSCustomTitleLable, UIImageView, NSString;

@interface AWELiveFormatBottomDesElement : AWELiveTopElement <AWELivePreStreamMessageSubscriber>

@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *bottomTitle;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getVSPremiereTypeWithModel:(id)a0;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_registerFontIfNeed;
- (BOOL)_isFontRegisted;
- (void)updateTitleToPotrait;
- (void)updateTitleToLandscape;
- (id)p_previewImageDownURLArray;
- (BOOL)p_canshowScore;
- (id)p_previewDownTitle;
- (void)p_updatePortraitStream;
- (void)p_updateLandscapeStream;
- (unsigned long long)liveElementType;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
