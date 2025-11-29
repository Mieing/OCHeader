@class NSMutableDictionary;
@protocol YataInstanceInnerInterface;

@interface YataEventChainDataManager : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (retain, nonatomic) NSMutableDictionary *eventChainDataDict;

+ (void)clipYataInnerParams:(id)a0;

- (id)initWithYataInstance:(id)a0;
- (void)setBizParams:(id)a0 toEventTrigger:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (void)setAdjustExprParams:(id)a0 toEventTrigger:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (id)generateTriggerParamsWithRenderNode:(id)a0 params:(id)a1;
- (id)pushTriggerParamsWithTrigger:(id)a0 renderNode:(id)a1 currentEventID:(id)a2 params:(id)a3;
- (void)clearTriggerParamsWithTrigger:(id)a0 nodeKey:(id)a1 eventID:(id)a2;
- (id)emptyTemplateTriggerParams;
- (id)identifierWithTrigger:(id)a0 key:(id)a1 eventID:(id)a2;
- (void)setParams:(id)a0 toTriggerParams:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (long long)lastIndexOfCharacter:(unsigned short)a0 inString:(id)a1;
- (id)triggerParams:(id)a0 nodeKey:(id)a1 eventID:(id)a2;
- (void)setUplinkParams:(id)a0 toEventTrigger:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (void)setLocalData:(id)a0 toEventTrigger:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (void)setRequestParams:(id)a0 toEventTrigger:(id)a1 nodeKey:(id)a2 eventID:(id)a3;
- (void).cxx_destruct;
- (id)localData;

@end
