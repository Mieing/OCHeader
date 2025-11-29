@class UIView, MMUIImageView, NSString, WCFinderDataItem, CAGradientLayer, RichTextView, MMLiveCDNPlayerView, UILabel;
@protocol MMFinderProfileLiveCollectionViewCellDelegate;

@interface MMFinderProfileLiveCollectionViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, ILinkEventExt>

@property (nonatomic) BOOL isReplayVedio;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UILabel *endTipsView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UILabel *digestLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) MMUIImageView *digestIcon;
@property (retain, nonatomic) UIView *separaLine;
@property (retain, nonatomic) MMUIImageView *privateIcon;
@property (weak, nonatomic) id<MMFinderProfileLiveCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0;
+ (BOOL)isOwnerWithDataItem:(id)a0;
+ (BOOL)isAudiencePurchasedWithDataItem:(id)a0;
+ (BOOL)needShowPaymentInfoWithDataItem:(id)a0;
+ (unsigned long long)getDescStyleWithDataItem:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithDataItem:(id)a0 isReplayVedio:(BOOL)a1;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)setMute:(BOOL)a0;
- (void)setAccessibilityInfo:(id)a0;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (BOOL)checkPurchaseUserCount;
- (id)watchOrPurchaseUserCountText:(unsigned long long)a0;
- (void)updateReplayDesc;
- (struct CGSize { double x0; double x1; })getIconSize;
- (unsigned long long)watchOrPurchaseCount;
- (void)hideReplayDetail;
- (BOOL)needShowPaymentInfo;
- (id /* block */)iconGeneratorWithName:(id)a0;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayMuteByNotifyOuter:(BOOL)a0;
- (void).cxx_destruct;

@end
