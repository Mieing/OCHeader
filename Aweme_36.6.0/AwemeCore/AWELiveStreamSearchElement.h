@class UITapGestureRecognizer, AWELiveStreamLocalSearchModel, UIImageView, IESLiveImageView, UILabel, UIView, AWELiveStreamEcomSearchTagView;

@interface AWELiveStreamSearchElement : AWELiveLeftElement

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchTitleLabel;
@property (retain, nonatomic) UIView *searchDotView;
@property (retain, nonatomic) UILabel *searchContentLabel;
@property (retain, nonatomic) IESLiveImageView *rightArrowImageView;
@property (retain, nonatomic) AWELiveStreamEcomSearchTagView *rightTag;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL hasEnterRoom;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AWELiveStreamLocalSearchModel *searchModel;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)showLiveElementWithWillAnimations:(id /* block */)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)preloadElement;
- (void)viewDidDisposed;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)checkPitayaLocalSearchWord;
- (double)searchIconSize;
- (double)searchArrowSize;
- (void)tapElementAction:(id)a0;
- (void)setBeforeAnimationLayout:(BOOL)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)textFont;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;

@end
