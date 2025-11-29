@class AWEIMFeedShareGuideBarModel, NSString, AWEPageContext, AWEIMFeedShareGuideBarOptimizeExpModel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate;

@interface AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyV7 : NSObject <AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyProtocol>

@property (retain, nonatomic) AWEIMFeedShareGuideBarModel *configModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) AWEIMFeedShareGuideBarOptimizeExpModel *optConfigModel;
@property (copy, nonatomic) id /* block */ showGuideHandler;
@property (copy, nonatomic) id /* block */ clickLikeHandler;
@property (nonatomic) BOOL hasLogBtnType;
@property (weak, nonatomic) id<AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate> showButtonDelegate;
@property (nonatomic) BOOL canShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowBasicConditionWithContext:(id)a0;
+ (BOOL)shouldRequestPitayaWithContext:(id)a0;
+ (BOOL)basicEntranceCheckWithContext:(id)a0;
+ (BOOL)basicFrequencyCheckWithContext:(id)a0;

- (void)setupBinding;
- (void)fetchShareModelAndShowButtonWithTriggerType:(long long)a0;
- (void)p_removeOlderFollowGuideHandler;
- (BOOL)shouldShowBasicCondition;
- (void)p_setupHandler;
- (void)updateFrequencyControl;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
