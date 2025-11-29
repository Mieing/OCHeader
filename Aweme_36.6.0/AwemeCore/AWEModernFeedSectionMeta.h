@interface AWEModernFeedSectionMeta : NSObject <NSCopying>

@property (nonatomic) double concreteCellWidth;
@property (nonatomic) double concreteCellHeight;
@property (nonatomic) double accessoryCellHeight;
@property (nonatomic) BOOL showAccessoryCell;
@property (nonatomic) BOOL hideCell;
@property (nonatomic) BOOL showCellHeaderView;
@property (nonatomic) BOOL showCellFooterView;
@property (nonatomic) double mainCellHeight;
@property (nonatomic) double attachmentCellHeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
