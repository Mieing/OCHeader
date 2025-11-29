@class MMUILabel, FunctionDetail, WCPayWebImageView;

@interface WCPayWalletBusinessCell : UICollectionViewCell

@property (retain, nonatomic) FunctionDetail *itemData;
@property (retain, nonatomic) WCPayWebImageView *iconImgView;
@property (retain, nonatomic) WCPayWebImageView *activityIconImgView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateCellWithItemData:(id)a0;
- (void)updateView;
- (void)updateIconView;
- (void)updateNameLabel;
- (void)updateSubTitleLabel;
- (void)updateActivityIconView;
- (BOOL)isNeedShowActivityIcon;
- (id)accessibilityLabelString;
- (void).cxx_destruct;

@end
