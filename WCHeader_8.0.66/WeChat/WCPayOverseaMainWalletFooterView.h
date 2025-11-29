@class UILabel, NSArray, UIView;

@interface WCPayOverseaMainWalletFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *m_coverView;
@property (retain, nonatomic) UILabel *m_walletRegionDescLabel;
@property (retain, nonatomic) NSArray *m_walletRegionDescArray;

- (void)layoutSubviews;
- (void)updateCoverView;
- (id)totalRegionDesc;
- (void)updateWalletRegionDescView;
- (void).cxx_destruct;

@end
