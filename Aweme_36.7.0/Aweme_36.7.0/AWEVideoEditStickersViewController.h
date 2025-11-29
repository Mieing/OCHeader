@class ACCVideoEditInfoStickerViewController, ACCSlidingViewController, NSArray, ACCSlidingTabbarView, AWESingleStickerDownloader, UIView, NSString, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, AWEVideoEditEmojiStickerCollectionViewController;
@protocol ACCStickerPannelLogger, AWEVideoEditStickersVCDelegate, ACCStickerPannelFilter;

@interface AWEVideoEditStickersViewController : ACCStickerPannelAnimationVC <ACCSlidingViewControllerDelegate, AWEVideoEditStickerCollectionVCDelegate, ACCVideoEditInfoStickerVCDelegate, AWEVideoEditStickerVCProtocol>

@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) AWEVideoEditEmojiStickerCollectionViewController *emojiViewController;
@property (retain, nonatomic) ACCVideoEditInfoStickerViewController *modernInfoStickerViewController;
@property (retain, nonatomic) AWESingleStickerDownloader *stickerDownloader;
@property (retain, nonatomic) UIView *topView;
@property (weak, nonatomic) id<AWEVideoEditStickersVCDelegate> delegate;
@property (retain, nonatomic) NSString *loadingStickerId;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (nonatomic) BOOL skipMineCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)dismissPanel;
- (void)modernStickerCollectionVC:(id)a0 didSelectSticker:(id)a1 atIndex:(long long)a2 categoryName:(id)a3 tabName:(id)a4 downloadProgressBlock:(id /* block */)a5 downloadedBlock:(id /* block */)a6;
- (void)stickerCollectionViewController:(id)a0 didSelectSticker:(id)a1 atIndex:(long long)a2 categoryName:(id)a3 tabName:(id)a4 downloadProgressBlock:(id /* block */)a5 downloadedBlock:(id /* block */)a6;
- (void)changeAccessbilityStatus;
- (void)buildVoiceOnView:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;

@end
