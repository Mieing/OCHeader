@class NSString;
@protocol ACCEditViewStateProtocol, ACCEditToolBarServiceProtocol;

@interface ACCEditToolBarBubbleComponent : ACCFeatureComponent <ACCEditViewHolderComponentProtocol, ACCEditToolBarServiceSubscriber>

@property (weak, nonatomic) id<ACCEditToolBarServiceProtocol> toolBarService;
@property (retain, nonatomic) id<ACCEditViewStateProtocol> viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialViewStateWithContext:(id)a0;

- (id)trackParams;
- (unsigned long long)preferredLoadPhase;
- (void)trackMoreButtonClick;
- (void)bindServices:(id)a0;
- (void)didConfirmSubBarItems:(id)a0;
- (BOOL)enable;
- (void).cxx_destruct;

@end
