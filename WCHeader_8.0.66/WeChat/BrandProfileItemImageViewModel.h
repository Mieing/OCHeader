@class NSString;

@interface BrandProfileItemImageViewModel : BrandProfileItemBaseViewModel

@property (readonly, nonatomic) NSString *imageCountStr;
@property (nonatomic) struct CGSize { double width; double height; } coverImgSize;

- (id)tableViewCellClassName;
- (BOOL)showBigCover;
- (double)calCellHeight;
- (double)calSingleStyleItemHeight;
- (double)normalCoverBottomMargin;
- (double)titleMaxWidth;
- (id)titleFont;
- (id)coverImgURL;

@end
