@class AWERVDetailPageContext, NSMutableSet, AWEListDataController;
@protocol AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWERVExposedMixInfoViewModel : NSObject

@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) NSMutableSet *episodeShowSet;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *subDataController;
@property (nonatomic) long long strengthenMixInfoLoadCount;

- (id)initWithPageContext:(id)a0;
- (id)createDataController;
- (void)updateDataControllerWithModel:(id)a0;
- (void)trackCompilationEpisodeSlideWithModel:(id)a0;
- (void)trackCompilationEpisodeClickWithSelectModel:(id)a0;
- (void)trackCompilationEpisodeShowWithModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
