@class NSString;
@protocol ACCAIGCCoreTrackData, ACCAIGCBusinessTrackData, ACCRepoDataContext;

@interface ACCAIGCUploadTrackModel : NSObject <ACCAIGCUploadTrackerProtocol>

@property (weak, nonatomic) id<ACCRepoDataContext> repoDataContext;
@property (weak, nonatomic) id<ACCAIGCCoreTrackData> coreTrackModel;
@property (weak, nonatomic) id<ACCAIGCBusinessTrackData> businessTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTaskFromAIEditWithModel:(id)a0;
- (void)endAIGCCoreTrackerWithEvent:(id)a0 specialParams:(id)a1;
- (void)beginRecordAIGCCoreTrackerWithEvent:(id)a0 specialParams:(id)a1 businessParams:(id)a2;
- (void)startRecordSubStepTracker:(id)a0 subStepEvent:(id)a1 singleSpecialTrackDict:(id)a2;
- (void)endRecordSubStepTracker:(id)a0 subStepEvent:(id)a1 singleSpecialTrackDict:(id)a2;
- (long long)getAIGCTrackerStartTime:(id)a0;
- (void).cxx_destruct;

@end
