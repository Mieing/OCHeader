@class NSNumber, NSString;

@interface IESLiveInteractionCommandParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *roomId;
@property (copy, nonatomic) NSString *gameType;
@property (copy, nonatomic) NSString *commandType;

+ (id)modelCustomPropertyMapper;

@end
