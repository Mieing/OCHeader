@class AWEPadBaseSectionViewModel, AWEPadPMCEpisodeCardModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVEpisodeViewModel : NSObject

@property (retain, nonatomic) AWEPadPMCEpisodeCardModel *episodeModel;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)collectButtonDidClicked;
- (void)transferToFormatPlayerRoom;
- (id)initWithEpisodeModel:(id)a0;
- (void)updateFavoriteStatus;
- (void).cxx_destruct;

@end
