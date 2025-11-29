@class NSString, IamBizCppToNativeManagerCallback;

@interface BizIamCppToNativeManagerImpl : NSObject <IamBizCppToNativeManagerBase> {
    IamBizCppToNativeManagerCallback *m_callBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)sendMessageAsync:(unsigned long long)a0 request:(id)a1;
- (id)syncSendMessage:(id)a0;
- (void)getMeTabOpenStateAsync:(unsigned long long)a0;
- (void).cxx_destruct;

@end
