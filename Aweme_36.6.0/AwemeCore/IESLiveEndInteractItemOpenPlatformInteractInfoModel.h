@class NSString, NSNumber;

@interface IESLiveEndInteractItemOpenPlatformInteractInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSNumber *interactType;
@property (nonatomic) BOOL interactiveScreenCast;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
