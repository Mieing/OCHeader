@class UIFont, NSString, UIColor, UIImage, NSNumber;

@interface AWEUIKitViewControllerEmptyPageConfig : NSObject <IESIMEmptyPageConfigProtocol>

@property (nonatomic) unsigned long long pageStyle;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double x0; double x1; } iconImageSize;
@property (copy, nonatomic) id /* block */ customImageViewGenerator;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) NSString *informativeText;
@property (nonatomic) double informativeLineSpacing;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } linkRange;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (nonatomic) BOOL disableShowSelectedAlphaButton;
@property (retain, nonatomic) UIFont *buttonTitleFont;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBorderColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) NSNumber *buttonCornerRadius;
@property (copy, nonatomic) id /* block */ appendixViewGenerator;
@property (nonatomic) unsigned long long templateType;

- (unsigned long long)p_aweUIKitViewControllerEmptyPageStyleWithIESIMStyle:(unsigned long long)a0;
- (unsigned long long)p_iesimViewControllerEmptyPageStyleWithAWEStyle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
