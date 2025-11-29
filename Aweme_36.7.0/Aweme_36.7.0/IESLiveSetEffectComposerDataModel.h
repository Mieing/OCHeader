@class NSNumber, NSArray;

@interface IESLiveSetEffectComposerDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *result;
@property (copy, nonatomic) NSArray *nodes;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
