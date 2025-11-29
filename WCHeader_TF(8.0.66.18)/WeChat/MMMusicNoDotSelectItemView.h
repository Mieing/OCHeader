@class CAGradientLayer, MMUIButton, CAShapeLayer, MMWebImageView, MMMusicNoDotSelectItemViewModel, UILabel;
@protocol MMMusicNoDotSelectItemViewDelegate;

@interface MMMusicNoDotSelectItemView : UICollectionViewCell

@property (retain, nonatomic) MMMusicNoDotSelectItemViewModel *dataModel;
@property (retain, nonatomic) MMWebImageView *bgImageView;
@property (retain, nonatomic) CAGradientLayer *timeLayer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) MMUIButton *deleteBtn;
@property (retain, nonatomic) CAShapeLayer *selectedBorderLayer;
@property (weak, nonatomic) id<MMMusicNoDotSelectItemViewDelegate> delegate;

+ (id)reuseKey;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)updateModel:(id)a0;
- (void)updateTimeLabelWithDuration:(double)a0;
- (void)setSelectedStatus;
- (void)clearSelectedStatus;
- (void)updateWhenInLongSelectedDragStatus:(BOOL)a0;
- (void)layoutSubviews;
- (void)onClickDeleteBtn;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
