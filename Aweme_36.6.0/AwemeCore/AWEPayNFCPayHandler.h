@interface AWEPayNFCPayHandler : NSObject

+ (BOOL)handlePayBusiness:(id)a0;
+ (void)startPreRequestIfNeed:(id)a0;
+ (void)removeLoadingByDelay;
+ (BOOL)canHandlePayBusinessWithBid:(id)a0;
+ (void)payPageDidShow;
+ (BOOL)handleWithBid:(id)a0 params:(id)a1;
+ (BOOL)handleSKM:(id)a0;
+ (BOOL)handleFKM:(id)a0;

@end
