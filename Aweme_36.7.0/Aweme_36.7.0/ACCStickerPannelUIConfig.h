@class UIFont;

@interface ACCStickerPannelUIConfig : NSObject

@property (nonatomic) double horizontalInset;
@property (nonatomic) double sizeRatio;
@property (nonatomic) unsigned long long numberOfItemsInOneRow;
@property (nonatomic) double pannelTopOffset;
@property (nonatomic) BOOL enableActionShock;
@property (retain, nonatomic) UIFont *slidingTabbarViewButtonTextNormalFont;
@property (retain, nonatomic) UIFont *slidingTabbarViewButtonTextSelectFont;
@property (nonatomic) BOOL isCollectionViewLayoutFixedSpace;
@property (nonatomic) BOOL shouldStickerBottomBarCollectionViewCellShowTitle;
@property (nonatomic) BOOL isStickerBottomBarCollectionViewCellSizeFixed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } stickerCollectionViewCellInsets;
@property (nonatomic) long long stickerCollectionViewCellImageContentMode;

- (void).cxx_destruct;
- (id)init;

@end
