@class UIFont;

@interface MMFinderLiveShopShelfAudienceCellsStyle : NSObject

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (class, readonly, nonatomic) double imageCornerRadius;
@property (class, readonly, nonatomic) double titleLeftMargin;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultTagSize;
@property (class, readonly, nonatomic) double tagsSpacing;
@property (class, readonly, nonatomic) double titleLineHeight;
@property (class, readonly, copy, nonatomic) UIFont *titleFont;

+ (double)imageWidthForCellWidth:(double)a0;

@end
