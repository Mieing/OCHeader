@class NSNumber, NSString;

@interface IESLiveCreateActorParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *roomId;
@property (copy, nonatomic) NSString *gameType;

+ (id)modelCustomPropertyMapper;

@end
