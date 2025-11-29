@class NSString, WSContactSearchLogic;

@interface LocalJSEventHandler_getSearchSuggestionData : LocalJSEventHandler_BaseEvent <WSContactSearchLogicDelegate, PBMessageObserverDelegate>

@property (retain, nonatomic) WSContactSearchLogic *searchContactLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)asyncSearchSuggest:(id)a0;
- (void)handleSuggestionCgi:(id)a0;
- (void)onReceiveSuggestionJSON:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onReturnWSContactResult:(id)a0;
- (void).cxx_destruct;

@end
