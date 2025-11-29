@class UIColor, UIImage, AWENavigationBar, UIButton;

@interface AWELoginBackgroundViewNavigationBarConfig : NSObject

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIColor *rightColor;
@property (retain, nonatomic) UIColor *rightBgColor;
@property (weak, nonatomic) AWENavigationBar *navigationBar;
@property (weak, nonatomic) UIButton *leftButton;
@property (weak, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL hideBottomline;

- (void).cxx_destruct;

@end
