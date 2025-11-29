@class NSString, NSNumber;

@interface AWELVideoAppointmentInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appointmentID;
@property (nonatomic) BOOL isAppointment;
@property (nonatomic) long long appointmentType;
@property (retain, nonatomic) NSNumber *beginTime;
@property (retain, nonatomic) NSNumber *appointmentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
