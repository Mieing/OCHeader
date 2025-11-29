@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveNetworkTrackerWrapper : NSObject <IESLiveNetworkTracker>

@property (retain, nonatomic) NSMutableDictionary *trackBasicInfo;
@property (retain, nonatomic) NSMutableDictionary *trackNetworkException;
@property (nonatomic) long long sumException;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackNetworkBaseInfo:(id)a0;
- (void)trackNetworkException:(id)a0;
- (id)networkExceptionWithLimit:(long long)a0;
- (id)topNetworkTrackFrequency:(long long)a0;
- (id)topNetworkTrackSize:(long long)a0;
- (long long)networkExceptionCount;
- (void)stopNetworkTrack;
- (id)topNetworkTrackField:(id)a0 top:(long long)a1;
- (id)configAppStateKey;
- (void).cxx_destruct;
- (id)init;

@end
