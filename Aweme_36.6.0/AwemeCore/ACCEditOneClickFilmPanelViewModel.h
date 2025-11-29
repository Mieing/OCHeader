@class CKGenericTemplateModel, ACCGenericEffectOneClickFilmPanelDataSource;
@protocol ACCEditOneClickFilmApplyServiceProtocol, ACCEditorOneClickFilmService, ACCEditOneClickFilmTrackService;

@interface ACCEditOneClickFilmPanelViewModel : ACCEditorGenericEffectPanelViewModel {
    CKGenericTemplateModel *_musicBeatsModel;
}

@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> oneClickFilmApplyService;
@property (weak, nonatomic) id<ACCEditOneClickFilmTrackService> oneClickFilmTrackService;
@property (retain, nonatomic) ACCGenericEffectOneClickFilmPanelDataSource *oneClickFilmPanelDataSource;
@property (copy, nonatomic) id /* block */ oneClickFilmMaterialFetcher;

- (id)musicBeatsModel;
- (BOOL)isMyFavoriteSticker:(id)a0;
- (void)bindServices;
- (id)addSearchTabIfNeededWithCategories:(id)a0;
- (BOOL)supportFavoriteEntrance;
- (id)p_createFavoriteCategoryModel;
- (id)createCellModelWithTemplateModel:(id)a0;
- (void)didSelectEffect:(id)a0 atIndex:(id)a1;
- (void)trackerFavoriteStatusChanged:(BOOL)a0 effectModel:(id)a1;
- (void)prepareMaterials:(id /* block */)a0;
- (void)loadSearchRecommendWords;
- (BOOL)updateFavoriteCategoryIfNeed;
- (id)initForOneClickFilmWithServiceProvider:(id)a0 publishModel:(id)a1;
- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)a0;

@end
