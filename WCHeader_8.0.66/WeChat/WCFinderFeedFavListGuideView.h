@class WCFinderRedPacketBannerView, NSString, UIView;
@protocol WCFinderFeedFavListGuideViewDelegate;

@interface WCFinderFeedFavListGuideView : UICollectionReusableView <WCFinderRedPacketBannerViewDelegate>

@property (retain, nonatomic) UIView *backGroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderRedPacketBannerView *redPacketBannerView;
@property (weak, nonatomic) id<WCFinderFeedFavListGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (double)headerHeightByRedpackageTitle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updateLikeGuideViewByRedpackageInfo:(id)a0;
- (void)onRedPacketBannerViewClickAction:(id)a0;
- (void).cxx_destruct;

@end
