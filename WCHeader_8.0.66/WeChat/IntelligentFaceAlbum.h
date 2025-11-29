@class NSMutableArray, NSRecursiveLock;

@interface IntelligentFaceAlbum : NSObject {
    NSRecursiveLock *m_lock;
    BOOL m_intelligentFaceAlbumInitSuccess;
    double m_clusterThreshold;
    struct TrackerManager { int mWidth; int mHeight; long long mTrackerConfig; struct unique_ptr<WeEffect::TrackerManager::TrackerManagerImpl, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct __compressed_pair<WeEffect::TrackerManager::TrackerManagerImpl *, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> { struct TrackerManagerImpl *__value_; } __ptr_; } mImpl; } m_face_tracker;
    struct XFaceCluster { struct unique_ptr<wevision::XFaceCluster::Impl, std::default_delete<wevision::XFaceCluster::Impl>> { struct __compressed_pair<wevision::XFaceCluster::Impl *, std::default_delete<wevision::XFaceCluster::Impl>> { struct Impl *__value_; } __ptr_; } mspImpl; } m_face_cluster;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } m_arrVl2NormFaceCluster;
    BOOL m_isFinishCompleteFaceCluster;
    BOOL m_isHadIntelligentFaceCluster;
}

@property (copy, nonatomic) id /* block */ m_SaveFaceClusterToDbBlock;
@property (retain) NSMutableArray *m_arrPreFaceCluster;

- (id)init;
- (void)dealloc;
- (void)initData;
- (void)initFaceFeatureHardwareAcceleration;
- (BOOL)checkIsOpenFaceFeatureHardwareAcceleration;
- (BOOL)checkModelFilesExist;
- (void)InitModel;
- (BOOL)checkFaceAlbumInitSuccess;
- (id)batchExecuteFaceAlbum:(id)a0 error:(id)a1;
- (id)executeBatchExecuteFaceAlbum:(id)a0;
- (id)getArrPreFaceCluster;
- (void)operateFaceClusterWithHistory:(id)a0 dicNewLabelPreLabel:(id)a1;
- (void)optimizeOperateFaceClusterWithHistory:(id)a0 dicNewLabelPreLabel:(id)a1;
- (BOOL)checkIsSameFaceClusterWithArrPreFaceFeature:(id)a0 arrFaceFeature:(id)a1;
- (void)updateOrInsertFaceClusterListToDbWithBlock:(id /* block */)a0 dicLabelDbLabel:(id)a1;
- (unsigned int)calculateFaceAlbumLableId:(unsigned int)a0 currentFaceClusterNumber:(long long)a1 faceAlbumData:(id)a2;
- (BOOL)asyncCheckAndRepairFaceCluster;
- (BOOL)asyncCheckAndRepairFaceClusterOptimize;
- (void)asyncFinishCompleteL2NormFaceCluster:(id)a0;
- (void)reportFaceClusterData;
- (BOOL)isEnableDataReport;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
