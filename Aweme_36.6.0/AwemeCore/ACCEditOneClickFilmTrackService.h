@class NSString, CKGenericTemplateModel, ACCRepositoryWorkspace, NSMutableArray;
@protocol IESServiceProvider;

@interface ACCEditOneClickFilmTrackService : NSObject <ACCEditOneClickFilmTrackService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCRepositoryWorkspace *repository;
@property (retain, nonatomic) NSMutableArray *templateIDs;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly, nonatomic) CKGenericTemplateModel *currentModel;
@property (readonly, copy, nonatomic) NSString *bringInMvSource;
@property (readonly, copy, nonatomic) NSString *bringInTemplateId;
@property (nonatomic) double templatePlayStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentModel:(id)a0;
- (void)updateEnterMethod:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)updateBringInTemplateId:(id)a0 mvSource:(id)a1;
- (void)trackOneClickFilmBottomEntrancesShow;
- (void)trackOneClickFilmEntrance;
- (void)trackOneClickFilmPanelShowWithPanelType:(id)a0;
- (void)trackOneClickFilmEnterPreview;
- (void)trackOneClickFilmTemplateShowModel:(id)a0 index:(long long)a1;
- (void)trackOneClickFilmSelectWithClickType:(long long)a0;
- (void)trackOneClickFilmPlayFinishModel:(id)a0;
- (void)trackOneClickFilmPlayLastModel:(id)a0;
- (void)trackOneClickFilmPlayTimesModel:(id)a0;
- (void)resetPlayTime;
- (void)trackOneClickFilmSaveMVEdit;
- (void)trackOneClickFilmCancelMVEdit;
- (void)trackOneClickFilmExitDialogShow;
- (void)trackOneClickFilmExitDialogConfirm;
- (void)trackOneClickFilmExitDialogCancel;
- (void)trackCancelTemplate:(long long)a0 type:(long long)a1;
- (void)trackFirstFrameTemplate:(double)a0;
- (BOOL)hasTemplateShow;
- (void)trackerFavoriteStatusChanged:(BOOL)a0 templateModel:(id)a1 extraParams:(id)a2;
- (id)prepareForCommonData;
- (id)prepareForDetailDataWithModel:(id)a0;
- (id)prepareForFullVData;
- (id)prepareTemplateData;
- (void).cxx_destruct;

@end
