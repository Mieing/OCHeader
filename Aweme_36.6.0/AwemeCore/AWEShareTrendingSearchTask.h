@class UIImage;

@interface AWEShareTrendingSearchTask : AWEShareCommonTask

@property (retain, nonatomic) UIImage *snapshotImage;

+ (id)taskWithTrendingSearch:(id)a0;
+ (id)contextWithTrendingSearch:(id)a0 shareInfo:(id)a1;
+ (id)previousPageWithTrendingBoardType:(unsigned long long)a0;
+ (id)itemIDWithTrendingBoardType:(unsigned long long)a0;

- (BOOL)canRecognizeQRCodeOfSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (void)didFinishPreparingWithSuccess:(BOOL)a0;
- (id)statsShareTrendingSearchStage;
- (id)fetchTrendingSearchQRCodeStage;
- (id)generateTrendingSearchImageStage;
- (id)showShareTrendingSearchAlertStage;
- (id)boardNameWithTrendingBoardType:(unsigned long long)a0;
- (id)finalImageWithQRCodeImage:(id)a0 boardName:(id)a1;
- (id)shareTrendingSearchTitleWithType:(id)a0;
- (void).cxx_destruct;

@end
