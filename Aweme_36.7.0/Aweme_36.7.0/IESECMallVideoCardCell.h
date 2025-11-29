@class UILongPressGestureRecognizer, NSString, IESECMallVideoPlayerWrapper, IESECMallVideoCardView, IESECMallFeedbackMaskView;

@interface IESECMallVideoCardCell : IESECMallNativeCardCell <IESECMallCollectionCellPlayerContainer, IESECMallVideoCardViewDelegate>

@property (retain, nonatomic) IESECMallFeedbackMaskView *feedbackCoverView;
@property (retain, nonatomic) IESECMallVideoCardView *videoCardView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL mallCardRemoveHistoryCode;
@property (retain, nonatomic) IESECMallVideoPlayerWrapper *videoPlayer;
@property (nonatomic) long long cornerRadius;
@property (nonatomic) BOOL fixPlayerReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillDisplay;
- (id)currentBridgeCallHanderForCards;
- (double)currentPlayTime;
- (id)videoData;
- (id)coverImageView;
- (id)awemeId;
- (BOOL)isValidVideo;
- (id)nativeView;
- (id)coverImageUrl;
- (void)cellDidEndDisplay;
- (id)containerForAwemePlay;
- (id)mainVideoURL;
- (id)mainVideoDuration;
- (id)coverImageViewForAwemePlay;
- (id)playerInnerListEnvID;
- (BOOL)isCellMute;
- (BOOL)shouldRepeatForVideo;
- (BOOL)canSetMute;
- (void)setIpadSizeScale:(double)a0;
- (void)setRootGlobalPropsExtra:(id)a0;
- (void)updateBorderRadius;
- (void)updateVoiceMute:(BOOL)a0;
- (id)defaultXBridges;
- (void)onThemeChanged:(id)a0;
- (void)addLongPressGesture:(id)a0;
- (void)updateUIWhenDarkModeChange:(BOOL)a0;
- (void)updateWithWindVaneData:(id)a0;
- (void)sendClickNoti:(id)a0;
- (void)updateWithModel:(id)a0 isCacheData:(BOOL)a1;
- (void)setupFeedbackView;
- (id)liveHeaderShowTrackEvent;
- (id)liveHeaderClickTrackEvent;
- (id)nickname;
- (void).cxx_destruct;
- (void)setIndex:(long long)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)cellType;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupView;
- (void)setItemId:(id)a0;
- (void)setPlayerHidden:(BOOL)a0;
- (void)hideFeedbackView;

@end
