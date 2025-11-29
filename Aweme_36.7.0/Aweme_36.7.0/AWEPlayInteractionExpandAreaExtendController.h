@class NSString, UIView;

@interface AWEPlayInteractionExpandAreaExtendController : AWEPlayInteractionNewBaseController <AWEPlayInteractionAuthorElementObserverProtocol>

@property (retain, nonatomic) UIView *authorInnerBlankView;
@property (retain, nonatomic) UIView *authorRightBlankView;
@property (retain, nonatomic) UIView *descriptionRightBlankView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;
+ (BOOL)shouldShowBlankView:(id)a0;
+ (BOOL)enableTextEnterDetail;

- (void)setupGesture;
- (void)setupRegister;
- (void)setupAuthorInnerBlankView;
- (void)onDidClickBlankViewWithEnterMethod:(id)a0;
- (void)updateAuthorInnerBlankViewHiddenState;
- (BOOL)updateAuthorRightBlankViewHiddenState;
- (void)updateAuthorRightBlankViewLayout;
- (BOOL)updateDescriptionRightBlankViewHiddenState;
- (void)updateDescriptionRightBlankViewLayout;
- (BOOL)shouldShowBlankView;
- (long long)elementCommonBottomOffSet;
- (void)onAuthorElementViewDidLoad:(id)a0;
- (void)onAuthorElementAlbumTagClicked:(id)a0;
- (void)onAuthorElementStoryTagClicked:(id)a0;
- (void)onAuthorElementTimeLabelClicked:(id)a0;
- (void)tempFixFunctionClip;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;

@end
