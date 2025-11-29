@interface AWELiveDynamicIslandActivitySingleton : NSObject {
    void /* unknown type, empty encoding */ activity;
}

@property (class, nonatomic, readonly) AWELiveDynamicIslandActivitySingleton *shared;

@property (nonatomic) BOOL activityIsShowing;
@property (nonatomic) BOOL activityHasAuthorized;

- (void)endActivityAll;
- (id)initWithDiContext:(id)a0;
- (void)forceEndDynamicIslandIfNeedWithCompletion:(id /* block */)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopy;

@end
