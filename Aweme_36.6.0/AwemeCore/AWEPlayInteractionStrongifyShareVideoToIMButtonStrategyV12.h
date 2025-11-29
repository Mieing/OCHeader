@class AWEPageContext, NSString, AWEIMFeedShareGuideBarModelV2;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate;

@interface AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyV12 : NSObject <AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyProtocol>

@property (retain, nonatomic) AWEIMFeedShareGuideBarModelV2 *configModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic) BOOL canShowButtonAfterStartPlay;
@property (nonatomic) BOOL canShowButtonAfterDiggo;
@property (nonatomic) BOOL canShowButtonAfterPlayFinish;
@property (nonatomic) BOOL canShowButtonAfterPlayXTime;
@property (nonatomic) BOOL hasLogBtnType;
@property (copy, nonatomic) id /* block */ showGuideHandler;
@property (copy, nonatomic) id /* block */ clickLikeHandler;
@property (weak, nonatomic) id<AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate> showButtonDelegate;
@property (nonatomic) BOOL canShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowBasicConditionWithContext:(id)a0;
+ (BOOL)shouldRequestPitayaWithContext:(id)a0;

- (void)setupBinding;
- (void)fetchShareModelAndShowButtonWithTriggerType:(long long)a0;
- (void)p_removeOlderFollowGuideHandler;
- (BOOL)shouldShowBasicCondition;
- (void)p_setupHandler;
- (BOOL)shouldShowQuickShareButtonAfterDiggo;
- (BOOL)shouldShowQuickShareButtonWhenVideoStartPlay;
- (BOOL)shouldShowQuickShareButtonWhenPlayXTime;
- (BOOL)shouldShowQuickShareButtonWhenPlayFinish;
- (void)updateFrequencyControl;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
