@class NSMutableDictionary;

@interface AWETeenQualityTimeLineManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneDicts;
@property (nonatomic) double enterBackgroundTime;

+ (id)sharedInstanced;

- (void)didEnterForground;
- (void)removeSceneWithKey:(id)a0;
- (void)startScene:(id)a0;
- (void)endScene:(id)a0;
- (void)startSectionWithScene:(id)a0 subScene:(id)a1 identifier:(id)a2 sectionName:(id)a3;
- (void)endSectionWithScene:(id)a0 subScene:(id)a1 identifier:(id)a2 sectionName:(id)a3;
- (void)removeAllScene;
- (void)reportScene:(id)a0;
- (id)p_sceneKeyWithScene:(id)a0 subScene:(id)a1 identifier:(id)a2;
- (void)addPauseTime:(id)a0;
- (void).cxx_destruct;
- (void)didEnterBackground;

@end
