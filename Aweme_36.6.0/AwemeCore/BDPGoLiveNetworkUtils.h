@interface BDPGoLiveNetworkUtils : NSObject

+ (BOOL)getGoLiveIsShowing:(id)a0;
+ (BOOL)checkShouldGoLive:(id)a0 error:(id *)a1;
+ (void)showGoLive:(id)a0 from:(id)a1;
+ (void)getGoLiveGuide:(id)a0 query:(id)a1 completion:(id /* block */)a2;
+ (void)setGoLiveIsShowing:(id)a0 showing:(BOOL)a1;
+ (id)defaultGoLiveSchema;
+ (void)logGoLiveDislike:(id)a0 completion:(id /* block */)a1;

@end
