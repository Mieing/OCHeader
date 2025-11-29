@interface IESECCommentItemViewLayout : NSObject

@property (nonatomic) long long style;
@property (nonatomic) long long titleLine;
@property (nonatomic) double normalHorizontalSpace;
@property (nonatomic) double normalVerticalSpace;

+ (id)contentFont;
+ (double)itemHeightForMediaCount:(unsigned long long)a0 layoutStyle:(long long)a1 horizontalSpace:(double)a2;
+ (double)itemHeightForMediaCount:(unsigned long long)a0 layoutStyle:(long long)a1 horizontalSpace:(double)a2 cellWidth:(double)a3;
+ (double)heightForMediasCount:(unsigned long long)a0 layoutStyle:(long long)a1 verticalSpace:(double)a2 horizontalSpace:(double)a3 cellWidth:(double)a4;
+ (double)normalImageWidthWithCellWidth:(double)a0 space:(double)a1;
+ (double)normalImageHalfScreenWidthWithCellWidth:(double)a0 space:(double)a1;
+ (double)minImageWidthWithCellWidth:(double)a0 space:(double)a1;
+ (double)heightForMediasCount:(unsigned long long)a0 layoutStyle:(long long)a1 verticalSpace:(double)a2 horizontalSpace:(double)a3;
+ (double)contentLineSpaceFromFont:(id)a0;

@end
