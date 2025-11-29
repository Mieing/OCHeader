@class NSString;

@interface IESGCPGameGetUserProfileParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) BOOL needCheckPersonalRecommendSwitchOn;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
