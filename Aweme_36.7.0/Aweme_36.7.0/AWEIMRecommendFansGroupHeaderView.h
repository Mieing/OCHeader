@class UIButton, UILabel, UIView;
@protocol AWEIMRecommendFansGroupHeaderViewDelegate;

@interface AWEIMRecommendFansGroupHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *partingView;
@property (retain, nonatomic) UILabel *lable;
@property (weak, nonatomic) id<AWEIMRecommendFansGroupHeaderViewDelegate> delegate;

+ (double)height;
+ (id)identifier;

- (void)__closeButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
