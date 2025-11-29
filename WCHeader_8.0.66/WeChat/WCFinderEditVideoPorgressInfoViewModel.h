@class NSMutableArray;

@interface WCFinderEditVideoPorgressInfoViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *thumbImages;
@property (retain, nonatomic) NSMutableArray *countNums;
@property (nonatomic) BOOL isLoadingImg;

+ (id)viewModelWithAssets:(id)a0;
+ (unsigned long long)countOfThumePerSecond;

- (id)initWithAssets:(id)a0;
- (void)getImgCount;
- (void)genThumbImagesWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
