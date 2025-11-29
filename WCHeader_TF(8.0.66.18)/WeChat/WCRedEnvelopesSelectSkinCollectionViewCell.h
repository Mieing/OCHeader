@class UIView, NSString, UIImage, HbEnvelopSource, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView, UIImageView, UIButton, UILabel, MMUIActivityIndicatorView;
@protocol WCRedEnvelopesSelectSkinCollectionViewCellDelegate;

@interface WCRedEnvelopesSelectSkinCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate, ILinkEventExt>

@property (nonatomic) BOOL isLeft;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem;
@property (retain, nonatomic) HbEnvelopSource *hbShowResource;
@property (retain, nonatomic) UIImage *skinImage;
@property (retain, nonatomic) UIView *downloadImageStatusMaskView;
@property (retain, nonatomic) MMUIActivityIndicatorView *imageDownloadingView;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView;
@property (retain, nonatomic) UIView *borderView;
@property (nonatomic) unsigned long long viewStatus;
@property (retain, nonatomic) UIImageView *reloadImageView;
@property (retain, nonatomic) UILabel *tryReloadImageLabel;
@property (retain, nonatomic) UILabel *descriptLabel;
@property (retain, nonatomic) UIView *rightUpTagView;
@property (retain, nonatomic) UILabel *expiredTimeLabel;
@property (weak, nonatomic) id<WCRedEnvelopesSelectSkinCollectionViewCellDelegate> m_delegate;
@property (retain, nonatomic) UIView *skinBackgroundView;
@property (retain, nonatomic) UIImageView *templateView;
@property (retain, nonatomic) UILabel *corporationLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UILabel *selectLabel;
@property (retain, nonatomic) UILabel *overtimeLabel;
@property (retain, nonatomic) UIButton *selectButton;
@property (nonatomic) BOOL isSkinSelected;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isSmallMode;
@property (nonatomic) unsigned long long cellType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)canTouch;
- (void)setSkinSelected:(BOOL)a0;
- (void)updateCellData:(id)a0;
- (id)getTemplateItemData:(id)a0;
- (void)updateSmallSelectSkinCellData:(id)a0;
- (void)updateExpiredSkinCellData:(id)a0;
- (void)updateSmallSelectSkinCellView;
- (void)updateExpireView;
- (void)updateExpiredSkinBackgroundView;
- (double)onelineHeight:(id)a0;
- (void)skinImageDownloadOK;
- (void)skinImageDownloadFail;
- (void)updateMaskView;
- (void)playPag;
- (void)stopPag;
- (void).cxx_destruct;

@end
