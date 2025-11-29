@class NSMutableDictionary;

@interface AWEVideoCoverEditorTextMonitor : NSObject

@property (nonatomic) double recommendTextStart;
@property (retain, nonatomic) NSMutableDictionary *stickerTrackInfoMap;
@property (retain, nonatomic) NSMutableDictionary *stickerBeginSelectedMap;

+ (id)textTemplateDownloadTimeKey:(id)a0;
+ (id)textTemplateUseTrackerWithProjectUUID:(id)a0;
+ (id)textTemplateUseEventKey;
+ (void)markStartDownloadTextTemplate:(id)a0 project:(id)a1;
+ (void)trackDownloadTextTemplate:(id)a0 project:(id)a1 error:(id)a2;
+ (void)markStartApplyTextTemplate:(id)a0 project:(id)a1 extraParams:(id)a2;
+ (void)markEndApplyTextTemplate:(id)a0 project:(id)a1 error:(id)a2;
+ (void)markStartUseTextTemplate:(id)a0 project:(id)a1 extraParams:(id)a2;
+ (void)trackUseTextTemplate:(id)a0 project:(id)a1 extraParams:(id)a2;
+ (id)sharedMonitor;

- (void)trackRecommendTextStart;
- (void)trackRecommendTextEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
