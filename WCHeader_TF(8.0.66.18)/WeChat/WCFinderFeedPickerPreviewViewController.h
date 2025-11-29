@class UIView, WCFinderFeedImageCDNView, WCFinderDataItem, MMMusicFadeOutLayer, WCFinderSimplePlayerView, WCFinderBGMPlayer, UIViewController, MMUIButton;
@protocol WCFinderFeedPickerPreviewViewControllerDelegate;

@interface WCFinderFeedPickerPreviewViewController : MMUIViewController

@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) MMUIButton *doneBtn;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *bgImageView;
@property (retain, nonatomic) UIView *bgBlurView;
@property (retain, nonatomic) UIView *outterBorderView;
@property (retain, nonatomic) UIView *innterBorderView;
@property (retain, nonatomic) MMMusicFadeOutLayer *imageMaskLayer;
@property (retain, nonatomic) WCFinderBGMPlayer *bgmPlayer;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (weak, nonatomic) id<WCFinderFeedPickerPreviewViewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *weakVC;

- (id)initWithDataItem:(id)a0;
- (void)viewDidLoad;
- (void)setupSubView;
- (void)viewWillLayoutSubviews;
- (void)setupContentView;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)onDoneBtnClick;
- (void)onReturn;
- (void).cxx_destruct;

@end
