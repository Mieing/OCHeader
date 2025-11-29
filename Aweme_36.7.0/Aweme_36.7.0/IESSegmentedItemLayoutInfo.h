@interface IESSegmentedItemLayoutInfo : NSObject

@property (nonatomic) double itemWidth;
@property (nonatomic) double contentWidth;
@property (nonatomic) double originX;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedTextSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (nonatomic) unsigned long long contentOptions;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double titleImageSpacing;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double fixedWidth;
@property (nonatomic) double itemMinWidth;
@property (nonatomic) unsigned long long imagePosition;

+ (id)defaultConfig;

- (void)calculateItemLayout:(struct CGSize { double x0; double x1; })a0 widthStyle:(long long)a1 itemsCount:(unsigned long long)a2 textSize:(struct CGSize { double x0; double x1; })a3;
- (void)calculateContentFrame:(struct CGSize { double x0; double x1; })a0 width:(double)a1 widthStyle:(long long)a2 textSize:(struct CGSize { double x0; double x1; })a3;

@end
