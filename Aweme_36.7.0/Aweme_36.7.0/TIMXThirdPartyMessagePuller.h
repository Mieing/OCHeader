@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXThirdPartyMessagePuller : NSObject <TIMXThirdPartyMessagePullerProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain) NSMutableDictionary *pullerDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kickoffPullerInBizId:(int)a0 InboxType:(int)a1 needResetInitPuller:(BOOL)a2;
- (id)maxMsgCreateAtWithInboxType:(int)a0 bizId:(int)a1;
- (id)pullerWithInboxType:(int)a0 bizId:(int)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
