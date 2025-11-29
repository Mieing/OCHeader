@class AWEEccsSendMessageDataModel;

@interface AWEEccsSendMessageResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsSendMessageDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
