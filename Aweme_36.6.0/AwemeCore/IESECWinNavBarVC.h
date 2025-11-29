@class UIView, IESECUIButton, IESECWinNavAuthorBar, IESECWinContext, IESECWinNavSearchBar, IESECWinNavBarVM, IESECWinNavObject, NSString, FBKVOController, IESECUIImageView, IESECServiceProxy;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinBackService, IESECWinAuthorService, IESECWinPageCardService, IESECWinLiveService, IESECWinHookActionService, IESECWinLynxCardService, IESECWinSplitService;

@interface IESECWinNavBarVC : UIViewController <IESECWinContextProtocol>

@property (retain, nonatomic) UIView *navbar;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) IESECUIButton *moreButton;
@property (retain, nonatomic) IESECUIButton *imEntryButton;
@property (retain, nonatomic) IESECUIButton *searchButton;
@property (retain, nonatomic) IESECUIImageView *liveTipImageView;
@property (retain, nonatomic) IESECWinNavBarVM *viewModel;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinNavSearchBar *searchBar;
@property (retain, nonatomic) IESECWinNavAuthorBar *authorBar;
@property (retain, nonatomic) IESECWinNavObject *object;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBackService> *backService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinHookActionService> *hookActionService;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } followOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowTitleOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } barTargetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchAction;
- (void)moreAction:(id)a0;
- (void)updateWithObject:(id)a0;
- (void)updateImEntryButton;
- (void)resetButtonsTintColor;
- (id)rightButtonLivingColor;
- (id)buttonNoLivingColor;
- (id)backButtonLivingColor;
- (void)updateSearchState:(double)a0;
- (void)myOrderClick;
- (void)windowClick;
- (void)shoppingCartClick;
- (void)shareClick;
- (void)hookBackAction;
- (void)imAction;
- (void)backAction;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidScroll;
- (void)setupUI;

@end
