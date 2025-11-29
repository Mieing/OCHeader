@class AWELiveElementConfig, AWELivePreStreamConfigCenter;

@interface AWELivePreStreamTopContainer : AWELiveBaseElementContainer

@property (retain, nonatomic) AWELiveElementConfig *elementConfig;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;

- (void)setupTopContainer;
- (void).cxx_destruct;
- (id)containerView;

@end
