@class MMUILabel, WalletGroupInfo, UIView;

@interface WCPayWalletBusinessSectionHeader : UICollectionReusableView

@property (retain, nonatomic) WalletGroupInfo *headerData;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *nameLabel;

- (void)layoutSubviews;
- (void)updateViewWithHeaderData:(id)a0;
- (void)updateView;
- (void)updateContentView;
- (void)updateHeaderName;
- (void).cxx_destruct;

@end
