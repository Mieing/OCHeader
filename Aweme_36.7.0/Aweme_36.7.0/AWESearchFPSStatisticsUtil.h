@class NSMutableDictionary;

@interface AWESearchFPSStatisticsUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessions;

+ (void)startScrollFpsMonitorWithScene:(id)a0;
+ (void)endScrollFpsMonitorWithScene:(id)a0 extraData:(id)a1;
+ (id)p_getFakeSceneWithValidScene:(id)a0;
+ (void)p_handleFakeSceneEnd:(id)a0 extraData:(id)a1;
+ (id)p_generateParamsWithFpsData:(id)a0 andExtraData:(id)a1;
+ (id)p_getValidSceneWithFakeScene:(id)a0 sceneHasSuffix:(BOOL)a1;
+ (BOOL)p_sendSuffixSceneEvent;
+ (void)p_sendEventWithOriginParams:(id)a0 andScene:(id)a1;
+ (BOOL)p_sendNonSuffixSceneEvent;
+ (BOOL)p_switchFpsAndDrop3ToV2;
+ (id)sortTagsInfo:(id)a0;
+ (id)sharedUtil;

- (id)p_buildSessionForScene:(id)a0 fakeScene:(id)a1;
- (void)p_removeSessionForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
