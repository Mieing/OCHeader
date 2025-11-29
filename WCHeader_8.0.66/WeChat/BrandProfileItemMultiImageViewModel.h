@interface BrandProfileItemMultiImageViewModel : BrandProfileItemBaseViewModel

+ (BOOL)showMultiImageForItemMsg:(id)a0 groupMsg:(id)a1;

- (id)tableViewCellClassName;
- (BOOL)showTitleWithinCover;
- (double)calCellHeight;
- (struct CGSize { double x0; double x1; })coverImageSize;
- (double)titleMaxWidth;
- (id)titleFont;
- (id)coverImageURLs;
- (unsigned int)imageCount;

@end
