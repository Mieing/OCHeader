@class NSString, NSArray;

@interface WCWebSocketMgr : MMUserService <MMServiceProtocol> {
    NSArray *_arrCertData;
    struct map<std::string, std::shared_ptr<WssCallback>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<WssCallback>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<WssCallback>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<WssCallback>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } callbackMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (long long)connectWebSocket:(unsigned int *)a0 group:(id)a1 config:(id)a2 appType:(unsigned int)a3 appDebugModeType:(unsigned int)a4 url:(id)a5 httpHeaders:(id)a6 subProtocols:(id)a7 tcpNoDelay:(BOOL)a8 perMessageDeflate:(BOOL)a9 forceCellularNetwork:(BOOL)a10;
- (void)_configureProxy:(id)a0;
- (void)_readProxySettingWithType:(id)a0 settings:(id)a1;
- (void)_fetchPAC:(id)a0 url:(id)a1;
- (void)_runPACScript:(id)a0 url:(id)a1;
- (id)certificateArrayFromDataList:(id)a0;
- (long long)closeWebSocket:(unsigned int)a0 group:(id)a1 code:(long long)a2 reason:(id)a3;
- (long long)sendMessage:(unsigned int)a0 group:(id)a1 message:(id)a2;
- (void)destroyWeApp:(id)a0;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didReceiveMessage:(id)a2;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didOpenWithCode:(long long)a2 success:(BOOL)a3 headers:(id)a4 profiles:(id)a5 msg:(id)a6;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didCloseWithCode:(long long)a2 reason:(id)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
