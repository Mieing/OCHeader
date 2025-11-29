@class NSString;

@interface BrandProfileItemVideoViewModel : BrandProfileItemBaseViewModel

@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) double titleMaxWidth;
@property (retain, nonatomic) NSString *timeStr;
@property (retain, nonatomic) NSString *coverImgURL;
@property (nonatomic) struct CGSize { double width; double height; } coverImgSize;

- (id)tableViewCellClassName;
- (double)calCellHeight;
- (double)normalCoverBottomMargin;
- (double)calSingleStyleItemHeight;
- (id)titleFont;
- (void).cxx_destruct;

@end
