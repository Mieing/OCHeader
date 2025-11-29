@class NSNumber, NSString;

@interface IESLiveLiveUpdateEffectGameStateParamModel : IESLiveBridgeModel

@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *gameType;
@property (copy, nonatomic) NSString *gameId;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
