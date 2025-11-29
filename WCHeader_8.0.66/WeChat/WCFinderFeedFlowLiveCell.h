@class WCFinderLiveNowView, NSString, MMLiveCDNPlayerView, WCFinderFeedContentVM, UILabel, UIView, WCFinderFeedStaticCoverContactView;
@protocol WCFinderFeedFlowLiveCellDelegate;

@interface WCFinderFeedFlowLiveCell : UICollectionViewCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate, WCFinderFlowCellAutoplayProtocol>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UIView *endTipsView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIView *recommendReasonView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (weak, nonatomic) id<WCFinderFeedFlowLiveCellDelegate> delegate;
@property (nonatomic) BOOL disableAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)a0;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (BOOL)isPlaying;
- (void)playWithSound:(BOOL)a0;
- (void)pause;
- (void)stop;
- (BOOL)shouldPreventAutoPlay;
- (void)layoutUI;
- (void)willMoveToWindow:(id)a0;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void)updateLiveCardBlurState;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)updatePlayAccessibilityWithLiveState:(unsigned long long)a0;
- (id)nickNameAccessibility;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onFeedLiveStatusChanged:(id)a0 state:(unsigned long long)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)a0;
- (void).cxx_destruct;

@end
