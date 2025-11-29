@class NSString, WeVisEffectConfigResponse;

@interface WeVisSettingsMgr : MMUserService <IMsgExt, MMServiceProtocol> {
    struct map<std::string, std::map<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, std::string>>>> { struct __tree<std::__value_type<std::string, std::map<std::string, std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::map<std::string, std::string>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::map<std::string, std::string>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, std::string>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _paramsMap;
    struct map<WeEffect::APP_SCENARIO, std::string, std::less<WeEffect::APP_SCENARIO>, std::allocator<std::pair<const WeEffect::APP_SCENARIO, std::string>>> { struct __tree<std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::__map_value_compare<WeEffect::APP_SCENARIO, std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::less<WeEffect::APP_SCENARIO>>, std::allocator<std::__value_type<WeEffect::APP_SCENARIO, std::string>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<WeEffect::APP_SCENARIO, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<WeEffect::APP_SCENARIO, std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::less<WeEffect::APP_SCENARIO>>> { unsigned long long __value_; } __pair3_; } __tree_; } _scenarioType2Names;
}

@property (nonatomic) unsigned long long lastMs;
@property (retain, nonatomic) WeVisEffectConfigResponse *localSettingInfo;
@property (retain, nonatomic) NSString *cgiSettingFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)scheduleLoadRemoteInfo:(unsigned long long)a0;
- (void)onServiceEnterForeground;
- (void)loadRemoteInfo;
- (id)getCGIInfo;
- (void)writeSettingsToPath:(id)a0;
- (void)onCgiCompletion:(id)a0 errCode:(unsigned int)a1;
- (void *)getUpdateParamsMap:(int)a0;
- (void)onServiceInit;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)cgiEnable;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
