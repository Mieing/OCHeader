@class NSString, UILongPressGestureRecognizer, UIImageView, TextStatePublishMediaInfo, TextStateMediaContainerView, TextStatePublishMediaView, MMUIButton, TextStatePublishSourceInfo;

@interface TextStatePublishMediaSwitchView : UIView <TextStateBaseMediaViewDelegate>

@property (nonatomic) unsigned int switchValue;
@property (retain, nonatomic) NSString *defaultImageId;
@property (retain, nonatomic) TextStatePublishMediaInfo *mediaInfo;
@property (retain, nonatomic) TextStatePublishSourceInfo *sourceInfo;
@property (retain, nonatomic) TextStateMediaContainerView *containerView;
@property (retain, nonatomic) TextStatePublishMediaView *innerMediaView;
@property (retain, nonatomic) UIImageView *innerCoverView;
@property (retain, nonatomic) UIImageView *innerBackgroundView;
@property (retain, nonatomic) MMUIButton *blurButton;
@property (retain, nonatomic) MMUIButton *liveButton;
@property (copy, nonatomic) id /* block */ tapBlurButtonHandler;
@property (copy, nonatomic) id /* block */ mediaSwitchHandler;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic) BOOL isPlayLiveByLongPress;
@property (nonatomic) BOOL useSystemFilterToGenerateBlur;
@property (nonatomic) BOOL isInInputState;
@property (copy, nonatomic) id /* block */ tapLiveButtonHandler;
@property (copy, nonatomic) id /* block */ longPreesPlayLiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (double)contentBottomY;
- (void)clearSwitch;
- (void)switchToDefaultImage:(id)a0;
- (void)switchToMediaInfo:(id)a0;
- (void)switchToSourceInfo:(id)a0;
- (void)restoreContainerToInner;
- (void)onTapBlurButton;
- (void)onTapLiveButton;
- (BOOL)isBlur;
- (BOOL)isUseLivePhoto;
- (void)onMediaSwitchWithImage:(id)a0;
- (void)onMediaSwitchWithView:(id)a0;
- (struct CGSize { double x0; double x1; })mediaScreenSize;
- (void)checkUseCustomBlurEffect;
- (void)requestUpdateDataSource;
- (void).cxx_destruct;

@end
