@class UILabel, MMUIButton;
@protocol MMMusicMVRecommendHeaderViewDelegate;

@interface MMMusicMVRecommendHeaderView : UIView {
    MMUIButton *_closeBtn;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MMMusicMVRecommendHeaderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didClickClose:(id)a0;
- (void).cxx_destruct;

@end
