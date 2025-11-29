@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEPublishTimeTracker : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventEndDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventExtraInfoDictionary;
@property (retain, nonatomic) NSMutableArray *backgroundEventBeginArray;
@property (retain, nonatomic) NSMutableArray *backgroundEventEndArray;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) double backgroundStart;
@property (nonatomic) long long backgroundDuration;
@property (nonatomic) BOOL startTracker;
@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) double composePauseDuration;
@property (nonatomic) BOOL isPreUploading;
@property (nonatomic) BOOL isTriggerInEdit;
@property (copy, nonatomic) NSString *publishTaskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)appWillResignActiveNotification;
- (void)appDidBecomeActiveNotification;
- (void)eventBegin:(id)a0;
- (void)eventEnd:(id)a0;
- (id)formatBackgroundEventWithArray:(id)a0;
- (id)uploadVideoResolutionForURL:(id)a0;
- (void)trackerTimeForTask:(id)a0;
- (void)eventBegin:(id)a0 isForce:(BOOL)a1;
- (void)event:(id)a0 resourceInfo:(id)a1;
- (double)durationWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)removeEvent:(id)a0;
- (void)dealloc;

@end
