@class NSMutableDictionary, NSMutableArray, AWEAwemeDetailDefaultTracker;

@interface AWEAwemeDetailTrackerManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackerIMPs;
@property (retain, nonatomic) AWEAwemeDetailDefaultTracker *defaultTracker;
@property (retain, nonatomic) NSMutableDictionary *attachInfoDic;

+ (id)sharedInstance;

- (void)attachDetailTableVC:(id)a0 extraParams:(id)a1;
- (id)trackEnterDetailInDetailTableVC:(id)a0 extraParams:(id)a1;
- (void)cancelAttachDetailTableVC:(id)a0;
- (id)trackStayTimeInDetailTableVC:(id)a0 extraParams:(id)a1;
- (void)setupTrackIMPs;
- (BOOL)shouldEnableNewDetailTrack;
- (id)eventWhiteListForTransmissionNode;
- (id)track:(long long)a0 inDetailTableVC:(id)a1 extraParams:(id)a2;
- (void)reportDuplicate:(long long)a0 forKey:(id)a1 tracker:(id)a2 trackerParams:(id)a3 currentParams:(id)a4;
- (id)trackEnterPersonalDetailInDetailTableVC:(id)a0 extraParams:(id)a1;
- (unsigned long long)trackPlatformForType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
