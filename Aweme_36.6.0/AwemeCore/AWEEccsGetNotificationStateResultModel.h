@class AWEEccsGetNotificationStateDataModel;

@interface AWEEccsGetNotificationStateResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsGetNotificationStateDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
