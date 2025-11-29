@class WCRedEnvelopesReceiveHomeTemplateView, HbEnvelopSource, UIImageView, NSString, UILabel, UIView, WCRedEnvelopesReceiveHomeTemplateItem;

@interface WCRedEnvelopesPromotionCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate>

@property (retain, nonatomic) UIView *promotionCellBackgroundView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView;
@property (retain, nonatomic) UILabel *corporationLabel;
@property (retain, nonatomic) UILabel *corporationLabel2;
@property (retain, nonatomic) UILabel *promotionWordingLabel;
@property (retain, nonatomic) HbEnvelopSource *hbShowResource;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem;
@property (nonatomic) BOOL isSkinSelected;
@property (nonatomic) BOOL isSmallPicMode;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateBackgroundView;
- (void)layoutSubviews;
- (void)updateCellData:(id)a0 isSmallPicMode:(BOOL)a1;
- (void)updateCellData:(id)a0;
- (void)setPromotionCellSelected:(BOOL)a0;
- (void)startDoneAnimation;
- (void).cxx_destruct;

@end
