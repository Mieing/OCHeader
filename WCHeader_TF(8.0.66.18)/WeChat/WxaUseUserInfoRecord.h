@class WxaUseUserInfoRecord_ScopeItem, WxaUseUserInfoRecord_PluginInfo;

@interface WxaUseUserInfoRecord : WXPBGeneratedMessage

@property (retain, nonatomic) WxaUseUserInfoRecord_PluginInfo *pluginInfo;
@property (retain, nonatomic) WxaUseUserInfoRecord_ScopeItem *scopeItem;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

@end
