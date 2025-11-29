@class UIViewController, NSString, AWEHPChannelDynamicSchedulingChannelMonitorModel, NSObject;
@protocol AWEHPChannelControllerConfigProtocol, AWEHPChannelLifeCycleInfoModelProtocol;

@interface AWEHPChannelDynamicSchedulingChannelModel : NSObject

@property (copy, nonatomic) NSString *channelId;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) double preReleaseMemoryCapacity;
@property (nonatomic) double postReleaseMemoryCapacity;
@property (retain, nonatomic) NSObject<AWEHPChannelLifeCycleInfoModelProtocol> *lcInfoModel;
@property (weak, nonatomic) AWEHPChannelDynamicSchedulingChannelMonitorModel *monitorModel;
@property (weak, nonatomic) UIViewController *contentViewController;

- (void).cxx_destruct;
- (id)description;

@end
