@class NSString;

@interface IESLiveLiveReenterRoomParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *autoOpenSchema;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *delayTime;
@property (copy, nonatomic) NSString *loadingToast;
@property (copy, nonatomic) NSString *errorToast;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
