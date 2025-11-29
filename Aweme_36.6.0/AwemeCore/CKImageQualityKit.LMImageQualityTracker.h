@interface CKImageQualityKit.LMImageQualityTracker : NSObject

+ (void)bindFileWatcherConfigs:(id)a0 with:(id)a1;
+ (void)onAddOrUpdateEditInfoWithCreationId:(id)a0 info:(id)a1;
+ (id)makePublishInfoWithCreationId:(id)a0 info:(id)a1;
+ (void)moveInfoWithCreationId:(id)a0 from:(long long)a1 to:(long long)a2;
+ (void)onRemoveNLEWithCreationId:(id)a0 uuid:(id)a1;
+ (id)getInfosWithCreationId:(id)a0 filter:(id /* block */)a1;
+ (id)getInfoWithCreationId:(id)a0 uuid:(id)a1;
+ (id)getAttachedInfosWithCreationId:(id)a0 uuid:(id)a1;
+ (id)getCameraSceneWithCreationId:(id)a0;
+ (id)mediaDataStringWithCreationId:(id)a0 uuid:(id)a1;
+ (id)scoredImagePathsWithCreationId:(id)a0;
+ (id)unscoredImagePathsWithCreationId:(id)a0 source:(long long)a1 contentTypeOptions:(id)a2 uuids:(id)a3;
+ (void)scoreImageWithCreationId:(id)a0 path:(id)a1 score:(id)a2;
+ (id)getScoreWithCreationId:(id)a0 for:(id)a1;
+ (id)currentSessionId;
+ (id /* block */)commonParamsBlock;
+ (void)setCommonParamsBlock:(id /* block */)a0;
+ (BOOL)enableFileMonitor;
+ (void)setEnableFileMonitor:(BOOL)a0;
+ (BOOL)enableTrackChangelog;
+ (void)setEnableTrackChangelog:(BOOL)a0;
+ (BOOL)enableVQScore;
+ (void)setEnableVQScore:(BOOL)a0;
+ (BOOL)enable_opt;
+ (void)setEnable_opt:(BOOL)a0;
+ (void)beginSession:(id)a0;
+ (void)asyncRecover;
+ (void)bindCreationId:(id)a0;
+ (void)bindSlaveWithCreationId:(id)a0 hostId:(id)a1;
+ (void)bindBizContextParserWithId:(id)a0 parser:(id /* block */)a1;
+ (void)trackWithId:(id)a0 scene:(id)a1 extra:(id)a2;
+ (void)trackWithId:(id)a0 changeLogs:(id)a1;
+ (void)setObjectWithId:(id)a0 val:(id)a1 forKey:(id)a2;
+ (id)getObjectWithId:(id)a0 forKey:(id)a1;
+ (void)setTracker:(id)a0;
+ (id)tracker;
+ (id)cache;
+ (void)setCache:(id)a0;
+ (void)endSession:(id)a0;
+ (void)save;
+ (id /* block */)logBlock;
+ (void)setLogBlock:(id /* block */)a0;
+ (void)addSubscriber:(id)a0;

- (id)init;

@end
