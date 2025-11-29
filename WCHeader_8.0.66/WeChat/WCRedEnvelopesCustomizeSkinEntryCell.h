@class UIButton, HbEnvelopSource, UIImageView, UIView, MMUILabel;
@protocol WCRedEnvelopesCustomizeSkinEntryCellDelegate;

@interface WCRedEnvelopesCustomizeSkinEntryCell : UICollectionViewCell

@property (weak, nonatomic) id<WCRedEnvelopesCustomizeSkinEntryCellDelegate> delegate;
@property (retain, nonatomic) HbEnvelopSource *viewData;
@property (retain, nonatomic) UIView *contentBkgView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (nonatomic) BOOL isSmallPicMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCellData:(id)a0 delegate:(id)a1;
- (void)updateCellData:(id)a0 delegate:(id)a1 isSmallPicMode:(BOOL)a2;
- (void)layoutSubviews;
- (void)setupContentView;
- (void)titleEntryButtonClick;
- (void)titleEntryButtonTouchDown;
- (void)titleEntryButtonTouchUp;
- (void).cxx_destruct;

@end
