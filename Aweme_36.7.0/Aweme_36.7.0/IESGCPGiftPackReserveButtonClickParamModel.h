@class NSString;

@interface IESGCPGiftPackReserveButtonClickParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
