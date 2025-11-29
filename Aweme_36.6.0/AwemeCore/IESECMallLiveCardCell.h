@class UILongPressGestureRecognizer, IESECMallLiveCardView, IESECMallLivePlayerWrapper, NSString, UIView, IESECMallFeedbackMaskView;

@interface IESECMallLiveCardCell : IESECMallNativeCardCell <IESECMallCollectionCellPlayerContainer, IESECMallLiveCardViewDelegate>

@property (retain, nonatomic) IESECMallFeedbackMaskView *feedbackCoverView;
@property (retain, nonatomic) IESECMallLiveCardView *liveCardView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL mallCardRemoveHistoryCode;
@property (nonatomic) long long cornerRadius;
@property (retain, nonatomic) IESECMallLivePlayerWrapper *livePlayer;
@property (retain, nonatomic) UIView *sliceView;
@property (nonatomic) BOOL fixPlayerReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentBridgeCallHanderForCards;
- (id)coverImageView;
- (id)awemeId;
- (void)cellWillDisplay:(BOOL)a0;
- (BOOL)isValidVideo;
- (id)nativeView;
- (id)liveModel;
- (id)coverImageUrl;
- (void)cellDidEndDisplay;
- (id)containerForAwemePlay;
- (id)mainVideoURL;
- (id)mainStreamData;
- (id)mainVideoDuration;
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
- (void)didDisAppear;
- (void)updateWithModel:(id)a0 isCacheData:(BOOL)a1;
- (void)configCell:(id)a0 temp:(id)a1 dataSource:(id)a2;
- (void)setupFeedbackView;
- (void).cxx_destruct;
- (void)setIndex:(long long)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAppear;
- (unsigned long long)cellType;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupView;
- (void)setItemId:(id)a0;
- (void)setPlayerHidden:(BOOL)a0;
- (void)hideFeedbackView;

@end
