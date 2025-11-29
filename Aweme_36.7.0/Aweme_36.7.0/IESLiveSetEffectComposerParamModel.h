@class NSArray, NSString;

@interface IESLiveSetEffectComposerParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *nodePaths;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *channel;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
