@class UIColor, UIImageView, UIImage, UILabel, UITabBarItem;

@interface BDPFakeTabBarButton : UIButton

@property (nonatomic) BOOL isSelected;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIImageView *normalImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) BOOL imageCenter;
@property (retain, nonatomic) UITabBarItem *tabBarItem;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
