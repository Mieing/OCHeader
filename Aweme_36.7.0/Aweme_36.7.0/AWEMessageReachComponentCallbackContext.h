@class AWEMessageReachComponentModel, AWEMessageReachBussinessParamsModel;

@interface AWEMessageReachComponentCallbackContext : NSObject

@property (retain, nonatomic) AWEMessageReachComponentModel *componentModel;
@property (retain, nonatomic) AWEMessageReachBussinessParamsModel *paramsModel;

- (void).cxx_destruct;

@end
