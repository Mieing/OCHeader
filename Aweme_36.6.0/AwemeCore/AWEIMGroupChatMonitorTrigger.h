@class NSArray, NSMutableDictionary, NSDictionary;
@protocol IESIMConversationProtocol, IESIMPerfFPSMonitorProtocol, AWEIMGroupChatMonitorTriggerDelegate;

@interface AWEIMGroupChatMonitorTrigger : NSObject

@property (retain, nonatomic) id<IESIMPerfFPSMonitorProtocol> fpsWrapper;
@property (copy, nonatomic) NSArray *delays;
@property (weak, nonatomic) id<AWEIMGroupChatMonitorTriggerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *fpsPhaseDict;
@property (copy, nonatomic) NSDictionary *conversationCommonParams;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;

- (void)startAll;
- (void)triggerScene:(id)a0 extraParams:(id)a1;
- (void)endAll;
- (id)__getCommmonConversationParams:(id)a0;
- (void)__startStageTrigger;
- (void)__startLayoutTrigger;
- (void)__endTrigger;
- (id)__endMonitorWithScene:(id)a0 suffix:(id)a1;
- (void)__triggerTrackEvent:(id)a0 params:(id)a1;
- (void)__startMonitorWithScene:(id)a0;
- (id)__phaseValueWithScene:(id)a0 suffix:(id)a1;
- (void)__cleanPhaseDictIfNeededAfterTrackEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0 delegate:(id)a1;

@end
