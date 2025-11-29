@class NSLock, NSMutableDictionary, IRISDataReferFeatureOptions;

@interface IRISDataAspectManager : NSObject {
    IRISDataReferFeatureOptions *options;
}

@property (retain, nonatomic) NSMutableDictionary *trackedActions;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ onActionBegin;
@property (copy, nonatomic) id /* block */ onActionEnd;

+ (id)sharedManager;

- (id)blockSenderClassList;
- (id)keyForTarget:(id)a0 action:(SEL)a1;
- (void)addTrackedAction:(SEL)a0 target:(id)a1 sender:(id)a2;
- (void)dispatchEvent:(unsigned long long)a0 sender:(id)a1 params:(id)a2;
- (SEL)swizzledSelectorForSelector:(SEL)a0;
- (BOOL)start:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
