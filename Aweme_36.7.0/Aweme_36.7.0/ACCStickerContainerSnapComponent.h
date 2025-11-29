@class ACCStickerContainerSnapServiceImpl, UIView;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface ACCStickerContainerSnapComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCStickerContainerSnapServiceImpl *snapService;
@property (retain, nonatomic) UIView *snapView;

- (void)componentDidDisappear;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)addSnapViewIfNeeded;
- (void).cxx_destruct;

@end
