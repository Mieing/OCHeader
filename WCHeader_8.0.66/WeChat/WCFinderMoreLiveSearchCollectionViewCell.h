@class UIView, FavAttributeCPLabel, NSString, WCFinderAuthInfoIconView, WCFinderSearchHighLightItemModel, MMLiveCDNPlayerView, WCFinderHeadImageView, UILabel;
@protocol WCFinderMoreLiveSearchCollectionViewCellDelegate;

@interface WCFinderMoreLiveSearchCollectionViewCell : UICollectionViewCell <WCFinderFeedContentVMLiveExt>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *endMaskView;
@property (retain, nonatomic) UIView *endTipsView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIView *recommendReasonView;
@property (retain, nonatomic) FavAttributeCPLabel *descLabel;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UIView *avatorContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) WCFinderSearchHighLightItemModel *itemModel;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithItemModel:(id)a0;
- (void)layoutUI;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void).cxx_destruct;

@end
