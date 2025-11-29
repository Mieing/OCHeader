@class AWEEccsWebsocketBreakDataModel;

@interface AWEEccsWebsocketBreakResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsWebsocketBreakDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
