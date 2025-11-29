@interface AWEECMallSegmentedItemLayout : NSObject

@property (nonatomic) double horizontalMargin;
@property (nonatomic) double titleImageSpacing;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedImageSize;
@property (nonatomic) BOOL needImageBorderRadius;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) unsigned int borderColorHex;
@property (nonatomic) unsigned int borderColorDarkHex;
@property (nonatomic) double fixedWidth;
@property (nonatomic) double itemMinWidth;
@property (nonatomic) unsigned long long imagePosition;
@property (nonatomic) double itemWidth;
@property (nonatomic) double contentWidth;
@property (nonatomic) double originX;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedTextSize;
@property (nonatomic) struct CGSize { double width; double height; } lottieSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedLottieSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lottieFrame;
@property (nonatomic) unsigned long long contentType;

+ (id)defaultConfig;

- (void)calculateItemLayout:(struct CGSize { double x0; double x1; })a0 widthStyle:(long long)a1 itemsCount:(unsigned long long)a2 textSize:(struct CGSize { double x0; double x1; })a3 selectedTextSize:(struct CGSize { double x0; double x1; })a4 selected:(BOOL)a5;
- (void)calculateContentFrame:(struct CGSize { double x0; double x1; })a0 width:(double)a1 widthStyle:(long long)a2 textSize:(struct CGSize { double x0; double x1; })a3 imageSize:(struct CGSize { double x0; double x1; })a4 lottieSize:(struct CGSize { double x0; double x1; })a5;

@end
