@interface BDAAppStoreTracker : NSObject

+ (void)trackWithEvent:(id)a0 label:(id)a1 appleID:(id)a2 adID:(id)a3 logExtra:(id)a4 extraParam:(id)a5;
+ (void)trackWithEvent:(id)a0 label:(id)a1 appleID:(id)a2 adID:(id)a3 logExtra:(id)a4 extraParam:(id)a5 completion:(id /* block */)a6;
+ (void)trackWithEvent:(id)a0 data:(id)a1;

@end
