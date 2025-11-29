@class UIFont, NSString, UIColor, UIImage, NSAttributedString;

@interface AWEIMUITagLabelModel : NSObject

@property (copy, nonatomic) NSAttributedString *attributedLabelString;
@property (copy, nonatomic) NSString *LabelString;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backGroundColor;
@property (nonatomic) double backGroundAlpha;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconOffset;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;

- (void).cxx_destruct;
- (id)init;

@end
