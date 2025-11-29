@class NSObject, AWEStorage, NSMutableSet;
@protocol OS_dispatch_queue;

@interface AWEOpenPlatformActionTrackerManager : NSObject

@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSMutableSet *uniqueIDSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shareManager;

- (void)addNotifications;
- (BOOL)enableAction;
- (void)setTrackParams:(id)a0 WithUniqueID:(id)a1;
- (id)getTrackerParamsFromUniqueID:(id)a0;
- (id)handleTrackParams:(id)a0;
- (void)removeTrackParamsWithUniqueID:(id)a0;
- (id)dateWithStage:(id)a0 reverse:(BOOL)a1 withStages:(id)a2 timeStamp:(id)a3;
- (id)getLastStageWithoutStage:(id)a0 withStages:(id)a1;
- (void)updateParams:(id)a0 withUniqueID:(id)a1;
- (void)uploadLocalTrackerWithUniqueID:(id)a0;
- (void)tryUploadAllLocalTracker;
- (void)createLocalTrackerWithName:(id)a0 withUniqueID:(id)a1;
- (void)updateStage:(id)a0 withUniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appWillEnterForeground;

@end
