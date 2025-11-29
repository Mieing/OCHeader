@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXMessageCenter : NSObject <TIMXInstanceScopeSingleton> {
    NSMutableDictionary *_messageHash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } p_lock;
}

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
