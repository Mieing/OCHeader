@class BrandProfileItemReaderCell;

@interface BrandProfileItemReaderViewModel : BrandProfileItemBaseViewModel

@property (weak, nonatomic) BrandProfileItemReaderCell *cellView;
@property (readonly, nonatomic) double normalCoverTopMargin;

- (BOOL)showAsLargeCover;
- (double)calCellHeight;
- (double)itemViewHeightForNormalItem;
- (double)firstItemTopPadding;
- (double)normalCoverBottomMargin;
- (id)tableViewCellClassName;
- (id)coverImgURL;
- (id)titleFont;
- (double)titleMaxWidth;

@end
