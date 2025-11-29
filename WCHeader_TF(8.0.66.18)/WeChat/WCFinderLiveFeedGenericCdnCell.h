@class NSString, MMLiveCDNPlayerView, UIImageView, UIView, WCFinderLiveGenericFeedVM, WCFinderLiveFeedGenericCoverReportInfo;
@protocol WCFinderLiveFeedGenericCdnCellDelegate;

@interface WCFinderLiveFeedGenericCdnCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCellPlayProtocol, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol, MMLiveCDNPlayerViewDelegate, WCFinderLiveGenericFeedVMDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UIView *endTipsView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (nonatomic) unsigned long long startPlayTimestamp;
@property (nonatomic) unsigned long long playerConnectTimestamp;
@property (nonatomic) BOOL isJustTappedByUser;
@property (retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo;
@property BOOL isPlayerCoverLoaded;
@property (nonatomic) BOOL disableEndMask;
@property (weak, nonatomic) id<WCFinderLiveFeedGenericCdnCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)updateLiveCardBlurState;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)stop:(BOOL)a0;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)setMute:(BOOL)a0;
- (BOOL)isPlayingWithSound;
- (void)markTappedByUser;
- (id)takePlayerViewSnapshot;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onForwardGestureAction:(id)a0;
- (void)updateGradientVisible;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayMuteByNotifyOuter:(BOOL)a0;
- (void)prepareForMorphTransition;
- (void)onPlayChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)onPlayMessageReceive:(id)a0;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayViewCoverLoadFinish:(id)a0;
- (void)onPlayEventRecvAnchorSEIInfo:(id)a0;
- (void)onPlayAudioModeChange:(BOOL)a0;
- (BOOL)hasBizInfoForVM:(id)a0;
- (void)onPlayVideoBackViewVisibleChanged:(BOOL)a0;
- (void)onLiveFinderObjectAsyncLoadInfoReady:(id)a0;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (BOOL)onFeedLiveGetIsAutoPlaying;
- (void).cxx_destruct;

@end
