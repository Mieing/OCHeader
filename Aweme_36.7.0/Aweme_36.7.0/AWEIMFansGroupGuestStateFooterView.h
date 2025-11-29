@class UILabel, UIImageView, UIView;
@protocol AWEIMFansGroupGuestStateFooterViewDelegate;

@interface AWEIMFansGroupGuestStateFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *lable;
@property (retain, nonatomic) UIImageView *icon;
@property (weak, nonatomic) id<AWEIMFansGroupGuestStateFooterViewDelegate> delegate;

+ (double)height;
+ (id)identifier;

- (void)__setupUI;
- (void)__handelTapbaseViewWithGesture:(id)a0;
- (void)configWithText:(id)a0 imageName:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
