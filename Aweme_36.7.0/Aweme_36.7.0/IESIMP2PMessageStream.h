@class NSHashTable, NSString, TIMXSDKInstance;

@interface IESIMP2PMessageStream : NSObject <TIMXOChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, IESIMP2PMessageStream> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_listeners_mutex;
}

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain, nonatomic) NSHashTable *listeners;
@property (copy) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
