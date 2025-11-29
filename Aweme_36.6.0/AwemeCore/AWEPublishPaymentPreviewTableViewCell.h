@class AFDRoundedView, AWEPublishPaymentPreviewItem, UIImageView, UIView, UILabel;

@interface AWEPublishPaymentPreviewTableViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEPublishPaymentPreviewItem *model;
@property (retain, nonatomic) AFDRoundedView *roundedView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *configItemLabel;
@property (retain, nonatomic) UILabel *configContentLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *secondaryItemLabel;
@property (nonatomic) BOOL disableClick;
@property (copy, nonatomic) id /* block */ disableShowConfigContent;
@property (nonatomic) unsigned long long cornerType;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configureUI;
- (void)setupCorners;
- (void)masonryAdaptSecondaryTitleModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
