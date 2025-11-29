@class IESContainer;
@protocol ACCEditUILayoutManagerProtocol;

@interface ACCEditUIContainerComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditUILayoutManagerProtocol> layoutManager;
@property (retain, nonatomic) IESContainer *layoutServiceContainer;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
