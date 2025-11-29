@class NSNumber, NSString;

@interface IESLiveLiveGetEffectGameStateDataModel : IESLiveBridgeModel

@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *gameType;
@property (copy, nonatomic) NSString *gameId;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;

@end
