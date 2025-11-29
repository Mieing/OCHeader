@class AWELandScapeCollectionButton;
@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AWELandscapeCollectionElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) AWELandScapeCollectionButton *collectionButton;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;

- (void)postDidCollectNotificationWithAction:(unsigned long long)a0;
- (void)trackCollectWithEventName:(id)a0;
- (void)realClickCollectionButtonAction;
- (void)handleCollectionButtonTap;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
