@class NSString, TIMXSDKInstance;
@protocol TIMXOMessagePullingStatusObserverDelegate;

@interface TIMXOMessagePullingStatusObserver : NSObject <TIMXPullerStatusChangeObserverDelegate> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long status;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXOMessagePullingStatusObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pullerSimpleStatusDidChangeTo:(long long)a0 forInbox:(int)a1;
- (id)initWithRootObject:(id)a0 forInbox:(int)a1;
- (void).cxx_destruct;

@end
