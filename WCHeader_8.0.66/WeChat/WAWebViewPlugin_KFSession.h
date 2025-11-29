@class NSString;

@interface WAWebViewPlugin_KFSession : WAWebViewPluginBase <IMsgExt> {
    NSString *_userName;
    unsigned int _lastUnreadCount;
}

- (unsigned int)getSessionUnreadCount;
- (void)notifyUnreadCountChangeTo:(unsigned int)a0;
- (void)checkUnreadCountChange;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnUnReadCountChange:(id)a0;
- (void).cxx_destruct;

@end
