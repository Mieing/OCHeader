@class UITapGestureRecognizer, UIImageView, UILabel, UIView, UIButton;

@interface DZNEmptyDataSetView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double verticalOffset;
@property (nonatomic) double verticalSpace;
@property (nonatomic) BOOL fadeInOnDisplay;

- (void)removeAllConstraints;
- (BOOL)canShowTitle;
- (BOOL)canShowDetail;
- (BOOL)canShowButton;
- (BOOL)canShowImage;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)didMoveToSuperview;
- (void)didTapButton:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
