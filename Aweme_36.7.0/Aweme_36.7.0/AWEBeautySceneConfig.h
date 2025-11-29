@interface AWEBeautySceneConfig : NSObject

@property (nonatomic) unsigned long long sceneType;

- (BOOL)isRecordSceneType;
- (BOOL)isEditSceneType;
- (id)init;

@end
