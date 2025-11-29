@class NSTimer, UIView, UITapGestureRecognizer, CADisplayLink, UISlider, UIImageView, UIButton, CSJMaterialMeta, NSString, CSJAdSlot, UILabel;
@protocol CSJPurePlayableLoadingViewControllerDelegate;

@interface CSJPurePlayableLoadingViewController : UIViewController {
    struct CGSize { double width; double height; } loadingBGSize;
}

@property (retain, nonatomic) UIImageView *pangolin;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *loadingBG;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIButton *clickButton;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (retain, nonatomic) UITapGestureRecognizer *buttonTapGesture;
@property (nonatomic) double showTime;
@property (retain, nonatomic) NSTimer *closeTimer;
@property (retain, nonatomic) CADisplayLink *updateProgressTick;
@property (nonatomic) BOOL haveTrackCloseLoading;
@property (retain, nonatomic) UISlider *volumeSlider;
@property (nonatomic) BOOL isVolumeMute;
@property (nonatomic) BOOL isViewShow;
@property (nonatomic) long long loadingStyle;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL validUpdateProgressScacle;
@property (nonatomic) double updateProgressScacle;
@property (weak, nonatomic) id<CSJPurePlayableLoadingViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *ritScene;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) unsigned long long transformDirection;
@property (nonatomic) BOOL isRewardedVideo;
@property (nonatomic) BOOL hideTopButtons;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isRenderFailed;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) BOOL isInitMute;
@property (nonatomic) long long trackStatus;

- (id)initViewControllerWithAd:(id)a0;
- (void)judgeClose;
- (long long)checkStyle;
- (id)attributedStringWithText:(id)a0;
- (void)clickButtonTapped:(id)a0;
- (id)gridentColorImage:(id)a0 label:(id)a1;
- (void)structStyle;
- (BOOL)isPlayableLandingPageType;
- (void)addVolumeChangeMonitor;
- (void)trackShowLoading;
- (void)invalidateCloseTimer;
- (void)trackCloseLoading;
- (void)reportDownloadButtonClickTrackExtraDic:(id)a0;
- (void)trackClickDownload;
- (void)updateProgressLabelText:(id)a0;
- (void)updateProgressToFinish;
- (void)layoutNormalSubviews;
- (id)c_xyDict;
- (void)layoutSubViewsForNativeExpress;
- (id)getTrackTag;
- (void)appWillEnterForegroundNotification:(id)a0;
- (id)getPageUrlString;
- (void).cxx_destruct;
- (id)buttonText;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidateDisplayLink;
- (void)viewWillDisappear:(BOOL)a0;
- (void)defaultStyle;
- (void)updateProgress:(id)a0;
- (void)customStyle;

@end
