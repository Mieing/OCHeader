@class NSString;

@interface IESIMSendMessageResponse_RecentSend_Plugin : AWEIMComponentBase <IESIMDidSendMessageAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponseWithContext:(id)a0;
- (void)addAccumulateRecentSendInfoModels:(id)a0;

@end
