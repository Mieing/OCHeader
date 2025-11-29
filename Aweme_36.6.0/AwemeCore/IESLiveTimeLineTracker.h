@class NSArray, NSDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IESLiveThreadService;

@interface IESLiveTimeLineTracker : NSObject <IESLiveTimelineServices>

@property (retain, nonatomic) NSDictionary *timeLineMetrics;
@property (retain) NSArray *longTrackTimeline;
@property (retain, nonatomic) NSMutableArray *trackTimeline1;
@property (retain, nonatomic) NSMutableArray *trackTimeline2;
@property (retain, nonatomic) NSMutableArray *trackTimelineGift;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackingQueue;
@property (retain) id<IESLiveThreadService> threadSampling;
@property (nonatomic) BOOL switched;
@property long long actionTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackTimeline;
- (void)trackModules;
- (void)addTimelineNode:(id)a0;
- (void)addTimelineGiftNode:(id)a0;
- (id)timelineBaseInfo;
- (id)timelineMetrics;
- (void)reportTrackInfo:(id)a0 hotPoint:(BOOL)a1;
- (void)storeLastAction;
- (BOOL)available;
- (void).cxx_destruct;
- (id)init;
- (id)timeline;

@end
