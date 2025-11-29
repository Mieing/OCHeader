@class UIView, UILabel, MMFinderLiveActivityView, NSString, WCFinderFeedImageCDNView, MMFinderLiveFeedHighlightTagView, WCFinderLiveFeedContentVM, CAGradientLayer, RichTextView, MMLiveCDNPlayerView, WCFinderHeadImageView, WCFinderAuthInfoIconView;
@protocol WCFinderLiveDiscoveryRelatedLiveCellDelegate;

@interface WCFinderLiveDiscoveryRelatedLiveCell : WCFinderLiveFeedBaseStyleableCell <MMLiveCDNPlayerViewDelegate, ILinkEventExt, WCFinderFeedContentVMExt, WCFinderMoreLiveCellPlayProtocol>

@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *topCoverView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *midCoverView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *bottomCoverView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UIView *endTipsView;
@property (retain, nonatomic) RichTextView *recommendReasonLabel;
@property (retain, nonatomic) UIView *recommendReasonView;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (nonatomic) BOOL canShowLiveActivityView;
@property (retain, nonatomic) MMFinderLiveActivityView *liveActivityView;
@property (nonatomic) unsigned long long startPlayTimestamp;
@property (nonatomic) unsigned long long playerConnectTimestamp;
@property (nonatomic) BOOL isJustTappedByUser;
@property (retain, nonatomic) WCFinderLiveFeedContentVM *contentVM;
@property (retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView;
@property (weak, nonatomic) id<WCFinderLiveDiscoveryRelatedLiveCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)prepareForReuse;
- (void)updateHighLightTag;
- (void)updateWithContentVM:(id)a0;
- (void)relayoutNickname;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initViews;
- (void)adjustSize;
- (void)layoutUI;
- (void)addBlurEffectIfNeed;
- (void)updateLiveCardBlurState;
- (void)removeBlurEffectIfNeed;
- (void)onAuthorViewDidClick;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)stop:(BOOL)a0;
- (void)setMute:(BOOL)a0;
- (BOOL)isPlaying;
- (void)markTappedByUser;
- (void)onForwardGestureAction:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutLiveActivityView;
- (void)prepareForMorphTransition;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onFeedLiveStatusChanged:(id)a0 state:(unsigned long long)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void)onFeedLiveHighlightTagUpdate:(id)a0;
- (void).cxx_destruct;

@end
