@class UIColor, NSString, UIFont, UIImage;

@interface AWESearchRightTopCoverTextModel : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double iconTextPadding;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *localImage;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;

- (void).cxx_destruct;

@end
