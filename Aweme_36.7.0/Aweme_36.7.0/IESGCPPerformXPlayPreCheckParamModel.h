@class NSNumber, NSString;

@interface IESGCPPerformXPlayPreCheckParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *gameId;
@property (retain, nonatomic) NSNumber *actionCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
