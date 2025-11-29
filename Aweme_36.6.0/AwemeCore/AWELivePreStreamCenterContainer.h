@class AWELiveElementConfig, AWELivePreStreamConfigCenter;

@interface AWELivePreStreamCenterContainer : AWELiveBaseElementContainer

@property (retain, nonatomic) AWELiveElementConfig *elementConfig;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;

- (void)setupCenterContainer;
- (id)getLiveStatusView;
- (void).cxx_destruct;
- (id)containerView;

@end
