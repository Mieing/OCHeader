@class NSString, NSDictionary, NSArray, TSPKEventData;

@interface TSPKEvent : TSPKBaseEvent <TMAPIControlTaskContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) TSPKEventData *eventData;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSArray *ignoreSymbolContexts;
@property (copy, nonatomic) NSString *methodType;
@property (nonatomic) long long ruleId;
@property (nonatomic) BOOL isIgnore;

- (id)rulerParams;
- (id)apiMethod;
- (id)apiClass;
- (id)apiDataType;
- (id)callToken;
- (void).cxx_destruct;
- (id)tag;
- (id)apiType;

@end
