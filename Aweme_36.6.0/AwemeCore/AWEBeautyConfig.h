@class AWEBeautyViewConfig, AWEBeautySceneConfig;

@interface AWEBeautyConfig : NSObject

@property (retain, nonatomic) AWEBeautySceneConfig *sceneConfig;
@property (retain, nonatomic) AWEBeautyViewConfig *viewConfig;

- (id)initWithSceneConfig:(id)a0 viewConfig:(id)a1;
- (void).cxx_destruct;

@end
