@class NSString, NSNumber;

@interface AWEEccsIMLogoutParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *pigeonCID;
@property (retain, nonatomic) NSNumber *doNotLogoutButCloseWs;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
