@class UIView, WCFinderFriendLikeCustomInfoView, WCFinderFeedContentVM, NSString, WCFinderLiveNowView, WCFinderAuthInfoIconView, WCFinderRichTextView, WCFinderHeadContactInfoView, MMLiveCDNPlayerView, WCFinderHeadImageView;
@protocol WCFinderColumnCollectionViewLiveCellDelegate;

@interface WCFinderColumnCollectionViewLiveCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderFeedContentVMExt, WCFinderFeedContentVMLiveExt, WCFinderColumnCollectionViewBaseCellProtocol>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UIView *endTipsView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) WCFinderRichTextView *descView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authView;
@property (retain, nonatomic) WCFinderHeadContactInfoView *contactInfoView;
@property (retain, nonatomic) WCFinderFriendLikeCustomInfoView *friendLikeView;
@property (retain, nonatomic) WCFinderRichTextView *recommendReasonTextView;
@property (nonatomic) unsigned long long startPlayTimestamp;
@property (nonatomic) unsigned long long playerConnectTimestamp;
@property (nonatomic) BOOL isJustTappedByUser;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (weak, nonatomic) id<WCFinderColumnCollectionViewLiveCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;
+ (id)adjustContent:(id)a0 withColorHexStr:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithContentVM:(id)a0;
- (void)playVideoIfSupportWithSilencePlay:(BOOL)a0;
- (void)pause;
- (void)stopVideoIfSupport;
- (void)setMute:(BOOL)a0;
- (void)markTappedByUser;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)_updateToolBarAreaWithContentVM:(id)a0;
- (void)updateLiveCardBlurState;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)a0;
- (void)prepareForMorphTransition;
- (void)onFeedLiveStatusChanged:(id)a0 state:(unsigned long long)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void).cxx_destruct;

@end
