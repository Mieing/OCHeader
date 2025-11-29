@class NSMutableDictionary, AWEAwemeModel;

@interface AWEMVLongVideoController : AWEDCFeedBaseController

@property (retain, nonatomic) AWEAwemeModel *updatedModel;
@property (retain, nonatomic) NSMutableDictionary *mixDataControllers;

- (id)mvPageContext;
- (void)updateContinueModelForModel:(id)a0;
- (void)preloadNextEpisodeModelWithAweme:(id)a0 useCache:(BOOL)a1;
- (void)fetchNextEpisodeModelWithAweme:(id)a0 ancestorModel:(id)a1;
- (id)getMixDataControllerForMix:(id)a0;
- (id)filterInvalidAweme:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
