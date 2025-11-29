@class UIView;
@protocol AWEMVChannelPlayerCardContainerProtocol;

@interface AWEMVChannelPlayerCardElementContainer : AWEElementContainer

@property (weak, nonatomic) UIView<AWEMVChannelPlayerCardContainerProtocol> *container;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void).cxx_destruct;

@end
