@class NSString, NSMutableDictionary, TBIndoorUserBehaviourStat, TBPromoteIconBehaviourStat, NSNumber, QAuthenStateError;

@interface QStatisticer : NSObject

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) double create;
@property (nonatomic) BOOL loadSuccess;
@property (retain, nonatomic) NSNumber *loadSuccessTime;
@property (retain, nonatomic) NSNumber *firstLoadTime;
@property (nonatomic) int configUpdateFailCount;
@property (nonatomic) long long lastWorldTileCount;
@property (retain, nonatomic) NSMutableDictionary *root;
@property (retain, nonatomic) NSMutableDictionary *mapLoad;
@property (retain, nonatomic) NSMutableDictionary *configUpdate;
@property (retain, nonatomic) NSMutableDictionary *oversea;
@property (retain, nonatomic) NSMutableDictionary *ugc;
@property (retain, nonatomic) NSMutableDictionary *indoorLog;
@property (retain, nonatomic) TBIndoorUserBehaviourStat *indoorUserBehaviourStat;
@property (retain, nonatomic) NSMutableDictionary *darkMode;
@property (retain, nonatomic) NSMutableDictionary *pointEvent;
@property (retain, nonatomic) NSMutableDictionary *vectorHeat;
@property (retain, nonatomic) NSMutableDictionary *heatMap;
@property (retain, nonatomic) NSMutableDictionary *arcLine;
@property (retain, nonatomic) NSMutableDictionary *trail;
@property (retain, nonatomic) NSMutableDictionary *dotScatter;
@property (retain, nonatomic) NSMutableDictionary *bitmapScatter;
@property (retain, nonatomic) NSMutableDictionary *groundOverlay;
@property (retain, nonatomic) NSMutableDictionary *aoi;
@property (retain, nonatomic) NSMutableDictionary *customStyle;
@property (retain, nonatomic) NSMutableDictionary *offline;
@property (retain, nonatomic) NSMutableDictionary *promote;
@property (retain, nonatomic) TBPromoteIconBehaviourStat *promoteIconBehaviourStat;
@property (retain, nonatomic) QAuthenStateError *auth;

- (id)init;
- (void)dealloc;
- (void)setSeneWithTag:(id)a0;
- (void)recordMapLoadCallbackEvent;
- (void)recordMapLoadConfigUpdate:(BOOL)a0;
- (id)addTimeForUserInfo:(id)a0;
- (void)recordMaploadTileError:(id)a0;
- (void)recordMaploadConfigError:(id)a0 userInfo:(id)a1;
- (void)recordOverseaEvent:(id)a0 value:(long long)a1;
- (void)setupLegacyOversea;
- (void)recordCustomLayerEvent:(id)a0 value:(long long)a1;
- (void)recordDarkModeCount:(id)a0 value:(long long)a1;
- (void)recordPointEventCount:(id)a0 value:(long long)a1;
- (void)recordHoneyCombHeatCount:(id)a0 value:(long long)a1;
- (void)recordHeatMapCount:(id)a0 value:(long long)a1;
- (void)recordarcLineCount:(id)a0 value:(long long)a1;
- (void)recordTrailCount:(id)a0 value:(long long)a1;
- (void)recordDotScatterCount:(id)a0 value:(long long)a1;
- (void)recordScatterBitMapCount:(id)a0 value:(long long)a1;
- (void)recordGroundOverlayCount:(id)a0 value:(long long)a1;
- (void)recordAoiLayerCount:(id)a0 value:(long long)a1;
- (void)recordCustomStyleCount:(id)a0 styleID:(id)a1;
- (void)recordOfflineMapCount:(id)a0 value:(long long)a1;
- (void)recordIndoorEvent:(id)a0 indoorInfo:(id)a1;
- (id)getAllIndoorEvents;
- (void)setUpIndoorLog;
- (void)recordAuthenErrorCode:(int)a0;
- (void)appendUniqueInfo:(id)a0 to:(id)a1 forKey:(id)a2 maxCount:(int)a3 equalPredicator:(id /* block */)a4;
- (id)currentRelativeTime;
- (id)relativeTime:(double)a0;
- (void)beginRecord;
- (void)finishRecord;
- (void).cxx_destruct;

@end
