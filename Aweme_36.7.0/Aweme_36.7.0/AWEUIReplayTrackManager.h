@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEUIReplayTrackManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (void)initPath;
+ (id)replayRootPath;
+ (void)initialize;
+ (id)sharedInstance;

- (id)getDescriptionForUI:(id)a0;
- (id)getViewControllerNode:(id)a0 withDetail:(BOOL)a1;
- (void)recordViewHierarchyWithWindow:(id)a0;
- (void)uploadAllViewHierarchyInfoWithExtraData:(id)a0;
- (void)recordViewHierarchyWithWindow:(id)a0 upload:(BOOL)a1 uploadExtraData:(id)a2;
- (id)feedbackTypeWithType:(id)a0;
- (void)uploadViewHierarchyInfoWithTimeStamp:(double)a0 jumpMatch:(BOOL)a1 extraData:(id)a2;
- (BOOL)isHit:(double)a0 fileCreateTime:(double)a1;
- (void)uploadReplayInfo:(id)a0 extraData:(id)a1 fileName:(id)a2;
- (id)getViewHierarchy:(id)a0 superView:(id)a1 superVC:(id)a2 withDetail:(BOOL)a3 withAccessibility:(BOOL)a4 targetView:(id)a5;
- (void)recordViewHierarchy:(id)a0 recordTime:(double)a1;
- (void)uploadViewHierarchyInfoWithTimeStamp:(double)a0 extraData:(id)a1;
- (id)zipFile:(id)a0 filePath:(id)a1;
- (id)getViewNode:(id)a0 withDetail:(BOOL)a1 withAccessibility:(BOOL)a2 targetView:(id)a3;
- (id)getUIKitInfoWithView:(id)a0;
- (id)getAccessibilityInfoWithView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)uploadURL;
- (id)toJsonString:(id)a0;

@end
