@interface WeChat.VoIPTipsBarService : MMUserService <MultiTalkMgrExt, IVOIPExt, MMServiceProtocol> {
    void /* unknown type, empty encoding */ _extDeviceTip;
}

- (void)onEnterMultiTalk:(id)a0;
- (void)onSwitchToOtherDevice:(id)a0;
- (void)OnBeginTalk:(id)a0;
- (void)OnSwitchOtherDevice:(id)a0;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)handleWithServerData:(id)a0;
- (void)reset;
- (BOOL)shouldShowExtDeviceTipWithWxGroupId:(id)a0;
- (BOOL)checkIfCouldChangeDeviceWithContact:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
