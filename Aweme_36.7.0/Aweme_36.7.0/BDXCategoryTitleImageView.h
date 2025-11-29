@class NSArray;

@interface BDXCategoryTitleImageView : BDXCategoryTitleView

@property (retain, nonatomic) NSArray *imageNames;
@property (retain, nonatomic) NSArray *selectedImageNames;
@property (retain, nonatomic) NSArray *imageURLs;
@property (retain, nonatomic) NSArray *selectedImageURLs;
@property (retain, nonatomic) NSArray *imageTypes;
@property (copy, nonatomic) id /* block */ loadImageCallback;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double titleImageSpacing;
@property (nonatomic, getter=isImageZoomEnabled) BOOL imageZoomEnabled;
@property (nonatomic) double imageZoomScale;

- (void)initializeData;
- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:(long long)a0;
- (void)refreshSelectedCellModel:(id)a0 unselectedCellModel:(id)a1;
- (void)refreshLeftCellModel:(id)a0 rightCellModel:(id)a1 ratio:(double)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
