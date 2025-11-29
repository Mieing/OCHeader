@class NSNumber;

@interface AWEPlayInteractionLiveAppointmentModel : AWEBaseApiModel

@property (nonatomic) long long liveStartTime;
@property (retain, nonatomic) NSNumber *appointmentId;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (nonatomic) long long lastStartTime;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasReservered;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
