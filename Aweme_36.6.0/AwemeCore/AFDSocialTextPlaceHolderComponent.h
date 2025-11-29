@class UILabel;
@protocol ACCEditViewContainer, ACCStickerServiceProtocol;

@interface AFDSocialTextPlaceHolderComponent : ACCFeatureComponent

@property (retain, nonatomic) UILabel *placeHolder;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (BOOL)shouldLoadComponent;
- (void).cxx_destruct;

@end
