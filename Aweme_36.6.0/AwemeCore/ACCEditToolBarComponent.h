@class NSArray, AWEStudioEditToolBarFeatureConfig, NSString, UIView, NSObject;
@protocol ACCEditViewStateProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCEditToolBarServiceProtocol, ACCMultiStyleAlertProtocol;

@interface ACCEditToolBarComponent : ACCFeatureComponent <ACCEditViewHolderComponentProtocol, ACCStickerServiceSubscriber>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditToolBarServiceProtocol> toolBarService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *alert;
@property (copy, nonatomic) NSArray *subBarItems;
@property (retain, nonatomic) UIView *moreBarItemView;
@property (retain, nonatomic) AWEStudioEditToolBarFeatureConfig *featureConfig;
@property (retain, nonatomic) id<ACCEditViewStateProtocol> viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialViewStateWithContext:(id)a0;

- (id)trackParams;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)stickerServiceConfigOtherViewAlpha:(double)a0;
- (void)regiestLoadViewCompetion;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setup;

@end
