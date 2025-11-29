@class UIView, NSString, YataEventModel, NSDictionary, YataEventTriggerContext, YataEventResponseObject, EventChainEventContextBridge;
@protocol YataRenderObjectInterface;

@interface YataEventData : NSObject <YataBizEventData>

@property (copy, nonatomic) NSString *triggerName;
@property (retain, nonatomic) YataEventModel *event;
@property (retain, nonatomic) NSDictionary *triggerParams;
@property (retain, nonatomic) YataEventResponseObject *responseObject;
@property (retain, nonatomic) YataEventTriggerContext *triggerContext;
@property (nonatomic) BOOL eventChainModularization;
@property (copy, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSDictionary *convertedEventFields;
@property (retain, nonatomic) EventChainEventContextBridge *context;
@property (readonly, nonatomic) NSDictionary *eventFields;
@property (readonly, weak, nonatomic) id<YataRenderObjectInterface> renderObject;
@property (readonly, weak, nonatomic) UIView *activeView;
@property (copy, nonatomic) id /* block */ responseCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTriggerType:(id)a0 eventModel:(id)a1 eventID:(id)a2 triggerContext:(id)a3;
- (void).cxx_destruct;

@end
