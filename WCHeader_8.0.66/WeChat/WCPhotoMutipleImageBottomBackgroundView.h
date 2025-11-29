@class WCDataItem, CAGradientLayer, UIImageView, RichTextView;

@interface WCPhotoMutipleImageBottomBackgroundView : UIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) RichTextView *contentView;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) UIImageView *privateImageView;
@property (nonatomic) BOOL fittingSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1;
- (void)initView;
- (void)initBackgroundLayer;
- (void)initContentView;
- (void)initPrivateImageView;
- (void)updateWithDataItem:(id)a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
