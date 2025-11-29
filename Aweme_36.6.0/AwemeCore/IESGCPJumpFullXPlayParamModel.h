@class NSString;

@interface IESGCPJumpFullXPlayParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *targetGiftPackageId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
