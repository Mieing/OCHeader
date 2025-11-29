@class NSArray, NSString;
@protocol IESLCPushManagerProtocol;

@interface IESLCMessageHandler : NSObject <IESLCMessageHandlerProtocol, IESLCPushMessageReceiverDelegate, IESLCMessageHandlerProtocol_Private>

@property (copy, nonatomic) NSArray *pluginArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLCPushManagerProtocol> pushManager;

- (BOOL)sendPushMessage:(id)a0;
- (void)p_notifyPluginMsgSended:(id)a0 result:(BOOL)a1;
- (void)alogAndTrackIfNeededWithMessage:(id)a0 action:(id)a1 result:(BOOL)a2;
- (void)pluginsWithBlock:(id /* block */)a0;
- (void)ieslc_didReceiveMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
