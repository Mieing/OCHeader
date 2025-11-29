@class NSMutableDictionary;

@interface BDEnvPlatformTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *header;
@property (retain, nonatomic) NSMutableDictionary *event;

+ (id)sharedInstance;

- (Class)trackerClass;
- (id)getCurrentEvent;
- (id)getOnTheFlyParamater;
- (Class)bdtrackerHeaderCls;
- (Class)tttrackerHeaderCls;
- (Class)TTTrackerStorageClass;
- (id)getTTTrackerEventFromWrapper:(id)a0;
- (Class)BDTrackerStorageClass;
- (id)combineEventAndHeader:(id)a0 params:(id)a1;
- (void)sendTrackerEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
