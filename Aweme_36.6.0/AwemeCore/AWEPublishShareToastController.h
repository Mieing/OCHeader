@class UIView, AWEPublishSuccessView, AWEAwemeModel, AWEVideoPublishViewModel, NSArray, UIImageView, UIButton, AWEPublishSuccessViewModern, AWEPublishSuccessBottomView, NSString, UILabel;
@protocol AWESharePublishExtension;

@interface AWEPublishShareToastController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long toastType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long sharePlatform;
@property (retain, nonatomic) id<AWESharePublishExtension> shareExtension;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) BOOL showIMListOnly;
@property (retain, nonatomic) AWEPublishSuccessView *publishSuccessView;
@property (retain, nonatomic) AWEPublishSuccessViewModern *publishSuccessViewModern;
@property (retain, nonatomic) AWEPublishSuccessBottomView *publishSuccessBottomView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *bindPhoneButton;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIImageView *stickerIconImageView;
@property (retain, nonatomic) UILabel *stickerInfoLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ animatedCloseBlock;
@property (copy, nonatomic) id /* block */ cancelAnimatedCloseBlock;
@property (copy, nonatomic) id /* block */ dismissalCompletionBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSArray *shareModelList;
@property (nonatomic) BOOL showBottomSuccessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)topViewController;

- (id)referString;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (BOOL)hasCommerceStickerInfo;
- (void)setupLayer;
- (void)setupSuccessViewType;
- (BOOL)shouldShowModernSuccessView;
- (void)setupModernUI;
- (void)setupLegacyUI;
- (BOOL)shouldShowBottomSuccessView;
- (void)updateViewFrame:(id)a0;
- (void)p_setupI10N;
- (void)p_setupCommerceSticker;
- (void)p_trackWhenPublishSuccessViewDidAppear;
- (BOOL)shouldShowImShareLabel;
- (void)bindPhoneButtonDidPressed;
- (void)_onCoverImageClicked:(id)a0;
- (BOOL)p_shouldEnableIMShareList;
- (void)updateViewFrameForBottomView:(id)a0;
- (void)p_trackQuickSaveIfNeededWithAction:(id)a0;
- (double)toastHeight;
- (void)goToAdDetail:(id)a0;
- (void)_onCoverImageClicked_IMP:(id)a0;
- (void)goToAdDetail_IMP:(id)a0;
- (id)initWithModel:(id)a0 type:(unsigned long long)a1 platform:(long long)a2 shareModels:(id)a3 publishViewModel:(id)a4 showIMListOnly:(BOOL)a5;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
