@class NSLock, NSMapTable;

@interface AWEECMiniWindowDispatchCenter : NSObject {
    NSLock *_locker;
    NSMapTable *_attachTargetMapper;
    NSMapTable *_clickCloseTargetMapper;
    NSMapTable *_customTapTargetMapper;
    NSMapTable *_muteStateChangedTargetMapper;
}

+ (id)shareInstance;

- (id)getLiveSmallWindowService;
- (void)restoreDefaultTapAction;
- (void)subscribeAttachMiniWindowWithTarget:(id)a0 completion:(id /* block */)a1;
- (void)unSubscribeAttachMiniWindowWithTarget:(id)a0;
- (void)subscribeClickCloseWithTarget:(id)a0 completion:(id /* block */)a1;
- (void)unSubscribeClickCloseWithTarget:(id)a0;
- (void)subscribeCustomTapWithTarget:(id)a0 completion:(id /* block */)a1;
- (void)subscribeCustomTapWithTarget:(id)a0 completion:(id /* block */)a1 liveResponse:(BOOL)a2;
- (void)unSubscribeCustomTapWithTarget:(id)a0;
- (void)unSubscribeCustomTapWithAllTargets;
- (void)subscribeMuteStateChangedWithTarget:(id)a0 changedBlock:(id /* block */)a1;
- (void)unSubscribeMuteStateChangedWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)detach;
- (void)attach;
- (void)setupData;

@end
