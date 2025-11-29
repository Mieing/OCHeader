@interface AWEIMGrowthImpl.IncentiveShareDataCenter : NSObject <IESIMUserServiceMessage, IESIMCoreServiceFactoryMessage, IESIMMessageSenderDelegate> {
    void /* unknown type, empty encoding */ _shareTaskData;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ p_shouldShowFeedElementGuide;
}

- (void)handleNoti:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
