@class NSDictionary, IESLiveTrackParamClipper, NSString;
@protocol IESLiveTrackerDelegate, IESLiveTracker;

@interface IESLiveTrackerWrapper : NSObject <IESLiveTracker>

@property (retain, nonatomic) IESLiveTrackParamClipper *paramClipper;
@property (nonatomic) BOOL optimizeUpload;
@property (nonatomic) long long deviceID;
@property (retain, nonatomic) NSDictionary *sampleConfig;
@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (weak, nonatomic) id<IESLiveTrackerDelegate> trackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackEventWithNoLivePrefix:(id)a0 params:(id)a1;
- (void)trackEventWithMatchPrefix:(id)a0 params:(id)a1;
- (void)vsTrackEvent:(id)a0 params:(id)a1;
- (void)vsTrackEvent:(id)a0 params:(id)a1 isLive:(BOOL)a2;
- (void)playbackTrackEvent:(id)a0 params:(id)a1;
- (void)trackADTag:(id)a0 label:(id)a1 extra:(id)a2;
- (void)trackEventWithoutLivePrefix:(id)a0 params:(id)a1;
- (void)trackADTag:(id)a0 label:(id)a1 refer:(id)a2 groupID:(id)a3 creativeID:(id)a4 logExtra:(id)a5 extraParams:(id)a6;
- (void)trackADTag:(id)a0 label:(id)a1 refer:(id)a2 creativeID:(id)a3 logExtra:(id)a4 adID:(id)a5 adExtraData:(id)a6;
- (void)trackADVsEvent:(id)a0 label:(id)a1 refer:(id)a2 eventType:(id)a3 adExtraData:(id)a4;
- (void)trackLiveRoomADLabel:(id)a0 extra:(id)a1;
- (void)_trackEvent:(id)a0 params:(id)a1;
- (void)setupUploadConfig;
- (BOOL)enableUploadForEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;

@end
