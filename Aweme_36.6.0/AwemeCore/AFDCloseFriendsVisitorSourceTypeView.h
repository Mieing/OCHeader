@class UIImageView;

@interface AFDCloseFriendsVisitorSourceTypeView : UIView

@property (retain, nonatomic) UIImageView *sourceTypeIcon;
@property (nonatomic) double outerW;
@property (nonatomic) double innerW;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) long long sourceType;

+ (id)sourceTypeViewWithInnerW:(double)a0 outerW:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 innerW:(double)a1 outerW:(double)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
