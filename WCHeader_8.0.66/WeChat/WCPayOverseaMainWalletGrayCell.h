@class UILabel, WalletGrayAreaItem, MMWebImageView;

@interface WCPayOverseaMainWalletGrayCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *m_iconView;
@property (retain, nonatomic) UILabel *m_descriptionLabel;
@property (retain, nonatomic) UILabel *m_extraInfoLabel;
@property (retain, nonatomic) WalletGrayAreaItem *m_item;
@property int radius;

- (void)udpateGrayItem:(id)a0 raduis:(int)a1;
- (void)layoutSubviews;
- (void)updateViewData;
- (void)updateIconView;
- (void)updateDescriptionLabel;
- (void)updateExtraInfoLabel;
- (void)setHighlighted:(BOOL)a0;
- (id)utf8String:(id)a0;
- (id)contentAccessbilityLabel;
- (id)extraInfoForAccessbilityLabel;
- (void).cxx_destruct;

@end
