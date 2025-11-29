@class UIColor, UIFont;

@interface CSToastStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *messageColor;
@property (nonatomic) double maxWidthPercentage;
@property (nonatomic) double maxHeightPercentage;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *messageFont;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) long long messageAlignment;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) long long messageNumberOfLines;
@property (nonatomic) BOOL displayShadow;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } activitySize;
@property (nonatomic) double fadeDuration;

- (id)initWithDefaultStyle;
- (void).cxx_destruct;
- (id)init;

@end
