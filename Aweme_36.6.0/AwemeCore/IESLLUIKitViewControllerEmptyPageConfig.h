@class UIFont, NSString, UIColor, UIImage, NSNumber;

@interface IESLLUIKitViewControllerEmptyPageConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } iconImageSize;
@property (copy, nonatomic) id /* block */ customImageViewGenerator;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) NSString *informativeText;
@property (nonatomic) double informativeLineSpacing;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (copy, nonatomic) id /* block */ linkBlock;
@property (retain, nonatomic) NSString *primaryButtonTitle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) BOOL informativeLabelHidden;
@property (retain, nonatomic) UIFont *informativeTextFont;
@property (retain, nonatomic) UIColor *informativeTextColor;
@property (retain, nonatomic) UIColor *informativeHighlightColor;
@property (retain, nonatomic) UIFont *informativeHighlightFont;
@property (retain, nonatomic) NSNumber *informativeLabelAlpha;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBorderColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) NSNumber *buttonCornerRadius;
@property (copy, nonatomic) id /* block */ appendixViewGenerator;
@property (nonatomic) unsigned long long templateType;

- (void).cxx_destruct;

@end
