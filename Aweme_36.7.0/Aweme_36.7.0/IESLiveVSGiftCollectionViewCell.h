@class IESLiveVSGiftItem, IESLiveVSGiftPanelNonClipViewContainer, UIImageView, IESLiveVSGiftSelectedView, UILabel, UIView, IESLiveVSGiftComboView;

@interface IESLiveVSGiftCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESLiveVSGiftSelectedView *selectedView;
@property (retain, nonatomic) IESLiveVSGiftComboView *comboView;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *hintContainer;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) IESLiveVSGiftItem *giftItem;
@property (retain, nonatomic) IESLiveVSGiftPanelNonClipViewContainer *nonClipViewContainer;

- (void)p_removeSelectedView;
- (void)p_removeComboView;
- (void)p_updateState:(long long)a0;
- (void)p_setActivityImage:(id)a0;
- (void)p_showSelectedView;
- (void)p_showBigGiftComboView;
- (void)p_showComboView;
- (void)p_trackerClick;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
