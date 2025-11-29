@class NSString, AWEPlayInteractionContext, AWEPageContext, AWEPlayInteractionLiveExtendGuideView, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonLiveExtendComponent : NSObject <AWELiveVideoFeedUpdateMessage, AWELiveRoomMessage, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEPlayInteractionLiveExtendGuideView *liveExtendView;
@property (copy, nonatomic) id /* block */ playedPeriodHandler;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)hideBottomButton;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)audienceQuitAllRoom;
- (long long)extendType;
- (void)bindEvent;
- (id)liveModuleService;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)subscribedLiveExtendInfo:(id)a0;
- (void)tapLiveExtendView;
- (void)removeEvent;
- (BOOL)isInOptimizeBtnLogic;
- (void)requestToShowButton:(long long)a0;
- (void)showLiveExtendIfNeeded;
- (long long)videoPlayTimes;
- (void)showBottomButton:(long long)a0;
- (void)fetchRoomDataAndTryShowButton:(id /* block */)a0;
- (id)p_trackParams:(id)a0;
- (id)liveExpendShowParams:(id)a0;
- (id)contentTextWithDict:(id)a0;
- (id)modelTagIDWithDict:(id)a0;
- (void).cxx_destruct;
- (id)itemID;
- (void)reset;
- (id)buttonView;

@end
