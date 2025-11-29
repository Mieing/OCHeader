@class CAGradientLayer, WCFinderFeedImageCDNView, UILabel, WCFinderFeedContentVM, UIView, MMAssetSelectCheckButton, MMUILabel;
@protocol WCFinderFeedPickerCollectionViewCellDelegate;

@interface WCFinderFeedPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderFeedImageCDNView *coverImageView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) UIView *unenableMask;
@property (retain, nonatomic) UIView *selectionBgView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton;
@property (retain, nonatomic) UILabel *indexLabel;
@property (nonatomic) BOOL enable;
@property (weak, nonatomic) id<WCFinderFeedPickerCollectionViewCellDelegate> delegate;

+ (id)cellID;
+ (double)cellHeightWidthWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)a0;
- (void)showedSelectedMarkWithIndex:(long long)a0 animated:(BOOL)a1;
- (void)onTapButton;
- (void)updateBgMaskView;
- (void)setSelectEnabled:(BOOL)a0 selected:(BOOL)a1;
- (void).cxx_destruct;

@end
