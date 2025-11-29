@class IESLiveUGCVideoHeaderDiffableModel, NSString, NSArray, IESLiveCombineSubject, IESLiveMultiKTVStore, NSMutableDictionary, NSDictionary, IESLiveKTVMVInfo, IESLiveUGCVideoCellModel, IESLiveUGCVideoListDiffableModel, NSNumber;
@protocol IESLiveUGCVideoSelectPanelDelegate;

@interface IESLiveUGCVideoSelectPanelViewModel : NSObject

@property (copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (weak, nonatomic) id<IESLiveUGCVideoSelectPanelDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *officialVideoDictionary;
@property (copy, nonatomic) NSArray *ugcVideoModels;
@property (retain, nonatomic) NSMutableDictionary *selectedModelDictionary;
@property (nonatomic) unsigned long long viewColumns;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *sourceSingerID;
@property (retain, nonatomic) NSNumber *sourceSongID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (weak, nonatomic) IESLiveUGCVideoCellModel *curSelectedModel;
@property (weak, nonatomic) IESLiveKTVMVInfo *curMVInfo;
@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *topHeaderObject;
@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *officialVideoObject;
@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *midHeaderObject;
@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *ugcVideoObject;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) NSMutableDictionary *chooseCacheDict;
@property (retain, nonatomic) IESLiveCombineSubject *officialModelsChangedSubject;
@property (retain, nonatomic) IESLiveCombineSubject *selectedModelChangedSubject;
@property (retain, nonatomic) IESLiveCombineSubject *didSelectModelSubject;
@property (retain, nonatomic) IESLiveCombineSubject *ugcModelsChangedSubject;
@property (weak, nonatomic) IESLiveMultiKTVStore *store;
@property (nonatomic) double getMVListTime;

- (void)didSetAttachingDIContext;
- (id)sectionControllerForObject:(id)a0;
- (id)listSectionController;
- (BOOL)isSelfSinging;
- (void)currentPlayingMVDidChange:(id)a0 singerID:(id)a1 songID:(id)a2;
- (void)didSelectCellWithModel:(id)a0 index:(id)a1;
- (void)fetchMVListWithLoadType:(long long)a0 completion:(id /* block */)a1;
- (void)refreshPanelInfoWithParams:(id)a0;
- (BOOL)shouldRefreshUrls;
- (void)trackPanelDidShowWithEvent:(id)a0 params:(id)a1;
- (void)didClickPreviewButton;
- (void)didClickChooseButtonFrom:(id)a0;
- (void)exchangeOfficialMVWithCompletion:(id /* block */)a0;
- (id)initWithUGCVideoDelegate:(id)a0 multiKTVStore:(id)a1;
- (id)singItemKey;
- (void)refreshSelectedStatusWithModel:(id)a0 itemKey:(id)a1;
- (void)refreshIsPlayingWithCurMVInfo:(id)a0 singerID:(id)a1 songID:(id)a2;
- (void)refreshWillPlayMask;
- (id)officialVideoModels;
- (id)completeModelList;
- (BOOL)isRemotePlayingSongID:(id)a0 userID:(id)a1;
- (id)transformWithServerData:(id)a0;
- (id)combineLocalData:(id)a0 serverData:(id)a1;
- (void).cxx_destruct;
- (id)userType;
- (BOOL)isConnected;
- (void)dealloc;
- (id)headerSectionController;
- (double)containerWidth;

@end
