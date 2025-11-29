@interface AWEFavoriteSegmentedItemLayoutInfo : IESSegmentedItemLayoutInfo

@property (nonatomic) unsigned long long imageType;
@property (nonatomic) unsigned long long contentPosition;

+ (id)defaultConfig;

- (void)calculateItemLayout:(struct CGSize { double x0; double x1; })a0 widthStyle:(long long)a1 itemsCount:(unsigned long long)a2 textSize:(struct CGSize { double x0; double x1; })a3;
- (void)calculateContentFrame:(struct CGSize { double x0; double x1; })a0 width:(double)a1 widthStyle:(long long)a2 textSize:(struct CGSize { double x0; double x1; })a3;

@end
