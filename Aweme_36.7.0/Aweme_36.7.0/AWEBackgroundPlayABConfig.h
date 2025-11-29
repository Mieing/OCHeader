@interface AWEBackgroundPlayABConfig : NSObject

+ (BOOL)enableBgPlayAutoPlay;
+ (BOOL)enablePortraitBgPlayAutoPlay:(id)a0 tabName:(id)a1;
+ (BOOL)shouldEnableLandscapeBGPlayAutoNextFeature:(id)a0 model:(id)a1;
+ (BOOL)enableLandscapeBgPlayAutoPlay:(id)a0;
+ (id)bgPlayAutoPlayDict;
+ (id)enablePortraitEnterFromScene;
+ (id)enablePortraitTabNameScene;
+ (id)enableLandscapeEnterFromScene;

@end
