@class UIColor;

@interface AppMessageBigPicViewStyle : NSObject

@property (copy, nonatomic) id /* block */ sizeCalculation;
@property (retain, nonatomic) UIColor *bgColor;
@property (readonly, nonatomic) double bigPicEdgeInset;
@property (readonly, nonatomic) double avatarSize;
@property (readonly, nonatomic) double iconNameSpacing;
@property (readonly, nonatomic) double nameFontSize;
@property (readonly, nonatomic) double picCountFontSize;
@property (readonly, nonatomic) double picCountIconSize;
@property (readonly, nonatomic) double titleFontSize;
@property (readonly, nonatomic) double titleEdgeInset;
@property (readonly, nonatomic) double gradientHeight;

+ (id)forwardPreviewStyle;
+ (id)forwardPreviewSheetStyle;
+ (id /* block */)fixshortLengthCalculationWithLength:(double)a0;
+ (id)appMessageStyle;
+ (id)messageRecordStyle;
+ (id)timelineStyle;

- (id)initWithBigPicEdgeInset:(double)a0 avatarSize:(double)a1 iconNameSpacing:(double)a2 nameFontSize:(double)a3 picCountFontSize:(double)a4 picCountIconSize:(double)a5 titleFontSize:(double)a6 titleEdgeInset:(double)a7 bgColor:(id)a8 gradientHeight:(double)a9 sizeCalculation:(id /* block */)a10;
- (struct CGSize { double x0; double x1; })estimateSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 allowSquareStyle:(BOOL)a1;
- (void).cxx_destruct;

@end
