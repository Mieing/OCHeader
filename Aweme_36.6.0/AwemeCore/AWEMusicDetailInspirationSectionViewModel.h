@class AWEMusicDetailCreateVideoHelper, AWEMusicDetailDataContext, NSArray, AWEMusicDetailTrackInstance, NSString, AWEMusicDetailIspirationDataFactory, AWEMusicDetailTemplateHelper, AWEMusicDetailCommonEntranceHelper;

@interface AWEMusicDetailInspirationSectionViewModel : AWEBaseListSectionViewModel <AWEDetailTemplateCreateVideoDelegate>

@property (retain, nonatomic) AWEMusicDetailIspirationDataFactory *dataFactory;
@property (retain, nonatomic) AWEMusicDetailCreateVideoHelper *createVideoHelper;
@property (retain, nonatomic) AWEMusicDetailTemplateHelper *templateHelper;
@property (retain, nonatomic) AWEMusicDetailCommonEntranceHelper *commonEntranceHelper;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (nonatomic) BOOL inspirationPerformanceHasTracked;
@property (retain, nonatomic) NSArray *firstPageInspirationList;
@property (nonatomic) BOOL hasAppendFirstPageInspirationInfos;
@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareTrackInstance:(id)a0;
- (void)handleFollowshootSchema:(id)a0;
- (BOOL)isEmptyList;
- (void)appendSkeletonModels;
- (void)fetchInspirationsInfoWithCompletion:(id /* block */)a0;
- (void)removeSkeletonModels;
- (void)appendFirstPageInspirationListModels;
- (void)setupInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateInspirationPerformanceHasTracked:(BOOL)a0;
- (BOOL)shouldShowInspirationInfo;
- (BOOL)handleCommonInspirationModel;
- (id)inspirationAwemeListDataControllerWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)sectionHeight;

@end
