@class NSString, WCPlayerPlayArgs, WCPlayerView, UITapGestureRecognizer, UIImageView, WCFinderFeedMediaWrap, UIButton, MMAssetPickerBrowserStateInfo, MMAssetInfo;
@protocol MMImagePickerControlCenter, MMAssetPickerBrowserViewDelegate;

@interface MVImagePreviewVideoView : WCPlayerControlView <MMAssetPickerBrowserViewProtocol>

@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) WCPlayerView *videoPlayerView;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo;
@property (nonatomic) struct CGSize { double width; double height; } playButtonSize;
@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (nonatomic) BOOL requestUneditedAsset;
@property (nonatomic) BOOL shouldPlayWithEditAttr;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (weak, nonatomic) id<MMAssetPickerBrowserViewDelegate> browserDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadAsset;
- (void)setupWithAsset:(id)a0;
- (void)stop;
- (void)pause;
- (void)clear;
- (void)onPlayButtonClicked;
- (void)onTap:(id)a0;
- (void)onVideoPlayFinish;
- (void)layoutSubviews;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void).cxx_destruct;

@end
