@interface AWEIMComponentGestureProxy : NSObject

+ (id)addGestureWithType:(long long)a0 onView:(id)a1 uniqueID:(id)a2;
+ (id)makeGestureWithType:(long long)a0;
+ (void)bindView:(id)a0 withAction:(id /* block */)a1 uniqueID:(id)a2;
+ (id)keyForActionWithUniqueID:(id)a0;
+ (id)addTapGestureOnView:(id)a0;
+ (void)bindView:(id)a0 withAction:(id /* block */)a1;
+ (id)sharedInstance;

- (void)proxyGestureAction:(id)a0;

@end
