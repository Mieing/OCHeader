@class NSNumber, NSString;

@interface IESLiveStartInteractItemOpenPlatformInteractInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *interactType;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL interactiveScreenCast;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
