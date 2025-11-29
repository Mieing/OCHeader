@class NSArray, UIImage, UIColor;

@interface AWEIMTwoAvatarClashViewPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSArray *leftAvatarURLList;
@property (retain, nonatomic) UIImage *leftPlaceholderImage;
@property (retain, nonatomic) UIColor *leftBackgroundViewColor;
@property (retain, nonatomic) NSArray *rightAvatarURLList;
@property (retain, nonatomic) UIImage *rightPlaceholderImage;
@property (retain, nonatomic) UIColor *rightBackgroundViewColor;
@property (nonatomic) BOOL shouldShowAvatarWithoutAnimation;
@property (nonatomic) BOOL newStyle;

- (void).cxx_destruct;

@end
