@class UIColor, UIFont, UIImage, UIView;

@interface BDMannorAdLargePictureElement : NSObject

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *titleColorDark;
@property (retain, nonatomic) UIColor *titleReadColor;
@property (retain, nonatomic) UIColor *titleReadColorDark;
@property (retain, nonatomic) UIColor *placeholderImageColor;
@property (retain, nonatomic) UIColor *imageRoundBorderColor;
@property (nonatomic) double imageRoundCornerRadius;
@property (nonatomic) double imageRoundBorderWidth;
@property (retain, nonatomic) UIImage *imagePlaceholder;
@property (retain, nonatomic) UIFont *bottomTextFont;
@property (retain, nonatomic) UIColor *bottomTextColor;
@property (retain, nonatomic) UIView *adTagLabel;
@property (retain, nonatomic) UIView *closeButton;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingRight;
@property (retain, nonatomic) UIColor *bgColor;

- (void).cxx_destruct;

@end
