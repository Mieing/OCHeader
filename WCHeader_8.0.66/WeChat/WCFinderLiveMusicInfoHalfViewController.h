@class UIView, MMWebImageView, MMMusicHorizontalScrollingView, MMFinderLiveMusicDataItem, NSString, UIImageView, CAGradientLayer, UIPanGestureRecognizer, MMUILabel, MMUIButton;

@interface WCFinderLiveMusicInfoHalfViewController : MMCPUIViewController <MMWebImageViewDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *closedView;
@property (retain, nonatomic) MMWebImageView *musicCoverHDBackgroundImageView;
@property (retain, nonatomic) MMWebImageView *musicCoverHDImageView;
@property (retain, nonatomic) UIView *musicCoverHDMaskView;
@property (retain, nonatomic) UIView *musicCoverHDMaskGradiantView;
@property (retain, nonatomic) CAGradientLayer *musicCoverHDMaskGradiantMaskLayer;
@property (retain, nonatomic) CAGradientLayer *musicCoverTopMaskLayer;
@property (retain, nonatomic) MMWebImageView *musicLogoImageView;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *songNameLabel;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *singerNameLabel;
@property (retain, nonatomic) UIView *musicInfoContainerBackgroundView;
@property (retain, nonatomic) UIView *musicInfoContainerView;
@property (retain, nonatomic) UIImageView *musicIconView;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *genreTimeLabel;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *albumLabel;
@property (retain, nonatomic) MMUILabel *musicSourceLabel;
@property (retain, nonatomic) UIImageView *musicSourceArrowView;
@property (retain, nonatomic) MMFinderLiveMusicDataItem *musicDataItem;
@property (retain, nonatomic) UIView *footerCloseBtnContainerView;
@property (retain, nonatomic) MMUIButton *footerCloseBtn;
@property (copy, nonatomic) id /* block */ loadedBlock;
@property (copy, nonatomic) id /* block */ closedBlock;
@property (copy, nonatomic) id /* block */ tappedAppLabelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicDataItem:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)_layoutSubviews;
- (void)reloadMusicItem:(id)a0;
- (void)handleMusicSourceLabelTap;
- (void)onClose;
- (void)closeAnimated:(BOOL)a0;
- (void)close;
- (void)onLoadImageOK:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;

@end
