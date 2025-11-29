@class DUXBottomNotification, NSString, AWEPlayInteractionContext, AWEPlayInteractionBottomButtonCollectionComponentContainerView, AWEPageContext, NSDictionary, AWECommonButtonInfoModel, AWEPlayInteractionPlayletCollectionView;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonPlayletCollectionComponent : NSObject <AWEPlayInteractionPlayletCollectionViewDelegate, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) NSDictionary *playletCollectionStrategy;
@property (retain, nonatomic) AWEPlayInteractionPlayletCollectionView *collectionView;
@property (copy, nonatomic) id /* block */ workItem;
@property (weak, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) BOOL appear;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isPageDisappear;
@property (nonatomic) BOOL enableShowCollectionButton;
@property (nonatomic) BOOL disableRecordForTransition;
@property (nonatomic) BOOL needReverse;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonCollectionComponentContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)trackShow;
- (void)requestCollected;
- (void)postNotificationWithType:(unsigned long long)a0;
- (void)collectionStatusChangedNoti:(id)a0;
- (void)showBottomNoti;
- (void)collectionAction;
- (void)cancelWorkItem;
- (void)trackCollectionAction;
- (BOOL)shouldShowPlayletCollectionButton;
- (BOOL)shouldShowAtPlayTime;
- (void)showPlayletCollectionButton;
- (void)syncStateIfNeed;
- (void)caculateCollectionButtonState:(id)a0;
- (void)trackClickCollectEvent;
- (void)updateElementState;
- (BOOL)shouldShowButtonForPlaylet:(id)a0;
- (BOOL)hasShowAboveTimes:(id)a0;
- (BOOL)hasCollectionPlaylet:(id)a0;
- (void)playInteractionPlayletCollectionViewDidTapCollection:(id)a0;
- (void)playInteractionPlayletCollectionView:(id)a0 stateChanged:(long long)a1;
- (void).cxx_destruct;
- (void)setup;
- (id)buttonView;

@end
