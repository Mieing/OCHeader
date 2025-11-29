@class NSString;

@interface AWEInteractionAppointmentStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) double onlineTime;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *appointmentId;
@property (nonatomic) long long appointmentType;
@property (copy, nonatomic) NSString *stickerExtraInfo;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
