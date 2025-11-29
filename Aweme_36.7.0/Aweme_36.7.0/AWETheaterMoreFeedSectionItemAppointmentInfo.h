@class NSString, AWELVideoAppointmentInfoModel, AWEURLModel;

@interface AWETheaterMoreFeedSectionItemAppointmentInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *playerCover;
@property (retain, nonatomic) AWEURLModel *metaCover;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerCoverJSONTransformer;
+ (id)metaCoverJSONTransformer;
+ (id)appointmentInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
