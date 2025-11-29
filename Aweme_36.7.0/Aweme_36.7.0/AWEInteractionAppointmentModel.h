@class AWEInteractionAppointmentStickerInfoModel;

@interface AWEInteractionAppointmentModel : AWEInteractionStickerModel

@property (retain, nonatomic) AWEInteractionAppointmentStickerInfoModel *appointmentInfo;

+ (id)appointmentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)nativeSticker;
- (void).cxx_destruct;

@end
