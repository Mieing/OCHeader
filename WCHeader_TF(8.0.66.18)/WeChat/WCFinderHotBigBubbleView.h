@class UIImageView, UILabel, MMWebImageView;
@protocol WCFinderHotBigBubbleViewDelegate;

@interface WCFinderHotBigBubbleView : UIView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMWebImageView *leftImageView;
@property (weak, nonatomic) id<WCFinderHotBigBubbleViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addShape:(id)a0;
- (void)updateWithLeftImgName:(id)a0 title:(id)a1 subTitle:(id)a2;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
