@class AWEPadBaseSectionViewModel, AWEPadPMCSeriesCardModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVSeriesViewModel : NSObject

@property (retain, nonatomic) AWEPadPMCSeriesCardModel *seriesModel;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)collectButtonDidClicked;
- (void)transferToPlayletDetailView;
- (id)initWithSeriesModel:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 coverRatio:(double)a3;
- (void)updateFavoriteStatus;
- (void).cxx_destruct;

@end
