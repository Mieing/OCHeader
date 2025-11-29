@class NSString, WCFinderSelfLikeTipsBannerView, UIView, WCFinderRedPacketBannerView;
@protocol WCFinderStreamFeedLikeGuideViewDelegate;

@interface WCFinderStreamFeedLikeGuideView : UICollectionReusableView <WCFinderRedPacketBannerViewDelegate>

@property (weak, nonatomic) id<WCFinderStreamFeedLikeGuideViewDelegate> delegate;
@property (retain, nonatomic) UIView *backGroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderRedPacketBannerView *redPacketBannerView;
@property (retain, nonatomic) WCFinderSelfLikeTipsBannerView *selfLikeTipsBannerView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelLikeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerHeightByShouldShowLikeGuide:(BOOL)a0 redpackageTitle:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)buttonAction;
- (void)cancelLikeAction;
- (void)updateContentVM:(id)a0;
- (void)updateLikeGuideViewIsLike:(BOOL)a0 redpackageInfo:(id)a1;
- (void)layoutAllSubviews;
- (void)onRedPacketBannerViewClickAction:(id)a0;
- (void).cxx_destruct;

@end
