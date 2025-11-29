@class UIColor, NSString, UIImage;

@interface AWEVideoTypeTagViewModel : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *iconImageLink;
@property (nonatomic) struct CGSize { double width; double height; } customIconImageSize;
@property (nonatomic) double tagHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double spacing;
@property (copy, nonatomic) id /* block */ iconLoadCompletion;
@property (copy, nonatomic) id /* block */ updateTagLabelBlock;
@property (nonatomic) BOOL hideIcon;
@property (nonatomic) double tagTextFontSize;

+ (id)defaultViewModel;

- (void).cxx_destruct;

@end
