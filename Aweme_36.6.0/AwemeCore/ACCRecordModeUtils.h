@interface ACCRecordModeUtils : NSObject

+ (BOOL)isRecordVideoModeId:(long long)a0;
+ (BOOL)isSegmentsModeId:(long long)a0;
+ (BOOL)isLightningModeId:(long long)a0;
+ (id)modeKeyIdentifierMap;
+ (BOOL)needSaveRestoredPropModeId:(long long)a0;
+ (BOOL)isSimpleMixHoldModeId:(long long)a0;
+ (id)modeTrackIdentifierMap;
+ (id)modeOrderMapWithOrderKeys:(id)a0;

@end
