@interface AbstractWebSearchDataFetcher : LocalJSEventHandler_BaseEvent

@property (readonly, nonatomic) unsigned long long scene;

- (void)handleJSEvent:(id)a0;
- (id)buildWebSearchRequest:(id)a0;
- (id)prepareReturnDictionary:(id)a0 params:(id)a1;
- (void)sendSearchDataToH5:(id)a0;
- (void)sendFailedDataToH5:(id)a0;
- (unsigned int)h5Version;
- (unsigned int)cgiNumber;
- (id)h5NotifyEventName;
- (BOOL)shouldCarryUserList:(id)a0 andScene:(unsigned int)a1 andBizType:(unsigned int)a2 isHomePage:(BOOL)a3;
- (void)onRequestWillStart:(id)a0;
- (void)onRequestFail:(id)a0;
- (void)onRequestSuccess:(id)a0;
- (id)makeEmptyJSONResultParam:(BOOL)a0;
- (id)makeNetworkFailParam:(BOOL)a0;

@end
