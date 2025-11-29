@class NSString;

@interface AWEECSecTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clean:(id)a0;
- (void)initTrackGraph;
- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;
- (id)trackGraphKey;
- (id)defaultEcomSecJsonString;
- (id)removeOtherKeys:(id)a0;

@end
