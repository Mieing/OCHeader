@class UIColor, NSString, UIFont, UIImage, NSNumber;

@interface ACCUIKitViewControllerEmptyPageConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) id /* block */ customImageViewGenerator;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *informativeText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (copy, nonatomic) id /* block */ linkBlock;
@property (retain, nonatomic) NSString *primaryButtonTitle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *informativeTextColor;
@property (retain, nonatomic) UIColor *informativeHighlightColor;
@property (retain, nonatomic) UIFont *informativeHighlightFont;
@property (retain, nonatomic) NSNumber *informativeLabelAlpha;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBorderColor;
@property (retain, nonatomic) NSNumber *buttonCornerRadius;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (copy, nonatomic) id /* block */ appendixViewGenerator;
@property (nonatomic) unsigned long long templateType;

- (void).cxx_destruct;

@end
