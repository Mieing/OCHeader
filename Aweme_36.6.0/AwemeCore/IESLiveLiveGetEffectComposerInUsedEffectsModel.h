@class NSArray, NSString;

@interface IESLiveLiveGetEffectComposerInUsedEffectsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *nodePathList;
@property (copy, nonatomic) NSString *scene;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
