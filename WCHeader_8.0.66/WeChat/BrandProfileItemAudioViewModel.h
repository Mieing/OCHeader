@interface BrandProfileItemAudioViewModel : BrandProfileItemBaseViewModel

@property (readonly, nonatomic) double normalCoverTopMargin;

- (void)setSectionData:(id)a0;
- (id)tableViewCellClassName;
- (id)coverImgURL;
- (double)calCellHeight;
- (double)firstItemTopPadding;
- (double)normalCoverBottomMargin;
- (double)titleMaxWidth;
- (id)tingItem;
- (unsigned long long)durationInSecond;

@end
