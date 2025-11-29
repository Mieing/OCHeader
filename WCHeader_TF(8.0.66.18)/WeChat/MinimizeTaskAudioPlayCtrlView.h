@class NSString, MMWebImageView, MMUIButton, UIView;
@protocol MinimizeTaskPlayCtrlDelegate;

@interface MinimizeTaskAudioPlayCtrlView : UIView <MinimizeTaskPlayCtrlCover>

@property (nonatomic) BOOL isPlayCtrlBlurCover;
@property (nonatomic) BOOL isPlayCtrlPlaying;
@property (nonatomic) long long taskGroup;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMWebImageView *backgroundImageView;
@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) UIView *playCtrlArea;
@property (retain, nonatomic) MMUIButton *playPauseButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *outerContentButton;
@property (weak, nonatomic) id<MinimizeTaskPlayCtrlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAudioCoverPlaceholder;

- (id)initWithGroupType:(long long)a0 ctrlDelegate:(id)a1;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)accessibilityBizPrefix;
- (id)buttonTintColor;
- (void)initSubviews;
- (void)initBgAndBorder;
- (void)initContentButton;
- (void)initCoverView;
- (void)initPlayCtrlArea;
- (void)initPlayOrPauseButton;
- (void)initCloseButton;
- (void)updatePlayCtrlStyle;
- (void)layoutSubviews;
- (void)setCoverImageUrl:(id)a0;
- (void)setCoverImage:(id)a0;
- (void)setCoverDefaultImage:(id)a0;
- (void)setIsPlaying:(BOOL)a0;
- (BOOL)isPlaying;
- (void)setCloseButtonState:(unsigned int)a0;
- (void)setPlayOrPauseButtonState:(unsigned int)a0;
- (void)setFoldingState:(BOOL)a0;
- (void)setUpButton:(id)a0 withState:(unsigned int)a1;
- (void)setCoverBlurCtrl:(BOOL)a0;
- (void)onPlayPauseButtonClicked;
- (void)onCloseButtonClicked;
- (void)onOuterContentViewClicked;
- (void).cxx_destruct;

@end
