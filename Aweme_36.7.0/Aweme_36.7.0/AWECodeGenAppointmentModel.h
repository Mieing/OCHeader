@class NSString;

@interface AWECodeGenAppointmentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *appointmentId;
@property (nonatomic) long long albumId;
@property (nonatomic) long long appointmentStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
