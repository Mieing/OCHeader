@class UIColor, UIFont, NSString, UIImage;

@interface WCFinderThanksButtonConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonContentInsets;
@property (nonatomic) double buttonHeight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) UIColor *thankedTitleLabelColor;
@property (retain, nonatomic) NSString *defaultTitleStr;
@property (copy, nonatomic) NSString *hadThankString;
@property (retain, nonatomic) UIImage *defaultThankImg;
@property (nonatomic) int iconType;

- (void).cxx_destruct;

@end
