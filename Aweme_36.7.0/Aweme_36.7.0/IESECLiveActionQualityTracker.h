@class NSError, NSString, IESECBTMModel, NSMutableDictionary, NSMutableArray, IESECLiveActionQualityTrackModuleInfo, IESECLiveContext;

@interface IESECLiveActionQualityTracker : NSObject

@property (retain, nonatomic) NSMutableArray *subTrackArray;
@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) IESECLiveActionQualityTracker *originalTracker;
@property (retain, nonatomic) NSString *trackType;
@property (retain, nonatomic) IESECLiveActionQualityTrackModuleInfo *moduleInfo;
@property (copy, nonatomic) NSString *clickArea;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *schema;

- (void)configAllInfo;
- (void)endActionQualityTracker;
- (void)sendTrackerWithProcessState:(long long)a0;
- (void)addSubTaskTracker:(id)a0;
- (id)lastTracker;
- (id)lastActionStatus;
- (void)safeSetTrackInfoToParams:(id)a0 object:(id)a1 key:(id)a2;
- (id)actionsName;
- (id)subTaskTrackString;
- (id)allSubTrackers;
- (id)subTrackArrayForJSON;
- (void)startActionQualityTracker;
- (void)sendTracker;
- (void)sendTrackerForLeaveRoom;
- (id)addSubActionTrackerWithName:(id)a0 success:(BOOL)a1 error:(id)a2 info:(id)a3;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;

@end
