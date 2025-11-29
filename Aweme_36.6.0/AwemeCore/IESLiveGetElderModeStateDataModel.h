@class NSNumber;

@interface IESLiveGetElderModeStateDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL currentState;
@property (retain, nonatomic) NSNumber *delayEffectState;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
