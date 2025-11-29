@class NSArray, NSTimer, NSString, NSNumber;

@interface IESLiveWatchDurationManager : NSObject <IESLiveWatchDurationManagerInterface>

@property (retain, nonatomic) NSTimer *liveWatchTimer;
@property (nonatomic) long long watchDuration;
@property (copy, nonatomic) NSArray *durationCollectArray;
@property (copy, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)startLiveWatch:(id)a0;
- (void)stopLiveWatch:(id)a0;
- (long long)currentLiveWatchDuration;
- (long long)liveWatchDurationWithRoomID:(id)a0;
- (void).cxx_destruct;

@end
