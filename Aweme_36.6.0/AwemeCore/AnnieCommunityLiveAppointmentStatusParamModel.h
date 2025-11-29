@class NSDictionary;

@interface AnnieCommunityLiveAppointmentStatusParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL appointmentStatus;
@property (copy, nonatomic) NSDictionary *appointmentInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
