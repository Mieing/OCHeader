@interface TMAPIControlTaskHandler : NSObject

+ (id)handleTask:(id)a0;
+ (id)popTask:(id)a0 inStore:(id)a1;
+ (id)pushTask:(id)a0 inStore:(id)a1;
+ (void)sendResultEvent:(id)a0 withStore:(id)a1 fromTask:(id)a2;

@end
