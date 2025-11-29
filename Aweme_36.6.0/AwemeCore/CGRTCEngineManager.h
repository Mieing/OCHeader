@class NSMutableArray;
@protocol XPlaySettingsDictionary, XPlaySettingsArray, XPlaySettingsInteger;

@interface CGRTCEngineManager : NSObject

@property (retain, nonatomic) NSMutableArray *engineArray;
@property (nonatomic) BOOL didPreloadEngine;
@property (nonatomic) BOOL hitPreloadEngine;
@property BOOL shouldDestroyEngine;
@property (retain, nonatomic) id<XPlaySettingsDictionary> enginePreloadConfig;
@property (retain, nonatomic) id<XPlaySettingsDictionary> enginePreloadConfigRTCAppId;
@property (retain, nonatomic) id<XPlaySettingsArray> enginePreloadConfigSupplierList;
@property (retain, nonatomic) id<XPlaySettingsInteger> enginePreloadConfigDestroyDelay;

+ (id)getEngineVersionWithType:(long long)a0;
+ (id)sharedManager;

- (BOOL)useDeprecated;
- (id)deprecated_createEngineWithModel:(id)a0;
- (BOOL)canPreloadEngine:(id)a0;
- (void)preloadEngine:(id)a0;
- (id)rtcAppIdWithChannel:(id)a0;
- (void)tracker:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)createRoom:(id)a0;
- (id)deprecated_createRoomWithModel:(id)a0 engine:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)destroyEngine;

@end
