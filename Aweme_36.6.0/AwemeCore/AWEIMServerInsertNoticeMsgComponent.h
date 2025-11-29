@class NSArray, NSMutableArray, NSString;

@interface AWEIMServerInsertNoticeMsgComponent : AWEIMComponentBase <AWEIMServerInsertNoticeMessageInterface, AWEIMComponentLazyCreate>

@property (copy, nonatomic) NSArray *firstScreenMessages;
@property (retain, nonatomic) NSMutableArray *messagesWaitedForCheckingFirstScreenAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (id)vcParent;
- (void)insertNoticeMessageWithModel:(id)a0;
- (void)didHaveFirstScreenCells;
- (BOOL)shouldInsertMsg:(id)a0;
- (void)insertMessageWithMsg:(id)a0 conversationID:(id)a1;
- (void)setMessageLastInsertTimeForMsg:(id)a0;
- (BOOL)isEnabledByExperimentWithMsg:(id)a0;
- (BOOL)shouldPassFrequencyLimitByTimeLengthWithMsg:(id)a0;
- (BOOL)shouldPassFrequencyLimitByFirstScreenAppearanceWithMsg:(id)a0;
- (BOOL)shouldLimitFrequencyByTimeLengthWithAweType:(long long)a0;
- (BOOL)shouldLimitFrequencyByFirstScreenAppearanceWithAweType:(long long)a0;
- (BOOL)isMatchedWithFirstScreenMessagesForMessage:(id)a0;
- (void).cxx_destruct;

@end
