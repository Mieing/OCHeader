@class UIView, NSString, WCFinderFeedContentVM, WCFinderAuthInfoIconView, RichTextView, MMLiveCDNPlayerView, WCFinderHeadImageView, UILabel;
@protocol WCFinderFinderTopLiveCellDelegate;

@interface WCFinderFinderTopLiveCell : UICollectionViewCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UILabel *endTipsView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIView *recommendReasonView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UIView *avatorContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderFinderTopLiveCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)a0;
- (void)play;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)layoutUI;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void).cxx_destruct;

@end
