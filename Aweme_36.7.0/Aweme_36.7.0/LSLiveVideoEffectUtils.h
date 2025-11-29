@class NSMutableArray;

@interface LSLiveVideoEffectUtils : NSObject {
    void *renderMsgManager;
}

@property (retain, nonatomic) NSMutableArray *listeners;

+ (id)getSingleInstance;

- (id)getListeners;
- (void)sendMessageToListenersWithType:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3 user_data:(void *)a4;
- (void)removeListener:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
