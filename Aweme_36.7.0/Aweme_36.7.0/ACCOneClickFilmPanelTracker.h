@class NSString;
@protocol ACCEditOneClickFilmPanelServiceProtocol;

@interface ACCOneClickFilmPanelTracker : ACCGenericEffectPanelTracker <ACCOneClickFilmPanelTrackerService>

@property (weak, nonatomic) id<ACCEditOneClickFilmPanelServiceProtocol> oneClickFilmPanelService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackGenericEffectSkipWithCurrentCategory:(id)a0 LastIndexPath:(id)a1 currentIndexPath:(id)a2;
- (void)updateMvScene:(id)a0;
- (id)genericEffectPanelService;
- (id)mvSourceWithCategoryName:(id)a0;
- (void).cxx_destruct;

@end
