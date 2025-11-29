@class AWEEccsLoadHistoryMessageDataModel;

@interface AWEEccsLoadHistoryMessageResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsLoadHistoryMessageDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
