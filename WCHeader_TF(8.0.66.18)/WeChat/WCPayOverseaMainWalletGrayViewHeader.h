@class WCPayNoticeBannerView, WCPayOverseaIBGGetWalletCgiCache, UIImageView, UIView;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayOverseaMainWalletGrayViewHeader : UICollectionReusableView

@property (retain, nonatomic) UIView *m_coverView;
@property (retain, nonatomic) UIImageView *m_logoView;
@property (retain) WCPayNoticeBannerView *m_noticeBannerView;
@property (retain) WCPayOverseaIBGGetWalletCgiCache *m_walletResp;
@property (weak) id<WCPayNoticeBannerViewDelegate> m_noticeDelegate;

- (void)updateWalletResp:(id)a0 noticeDelegate:(id)a1;
- (void)layoutSubviews;
- (void)updateCoverView;
- (void)updateBannerView;
- (id)utf8String:(id)a0;
- (void)updateLogoView;
- (id)contentAccessbilityLabel;
- (void).cxx_destruct;

@end
