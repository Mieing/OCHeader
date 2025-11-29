@class NSString, NSPointerArray, TIMXSDKInstance, TIMXPBResponseLongConnectionCallback;

@interface TIMXOFriendManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allDelegates;
- (void)handleFriendRelationshipMessage:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
