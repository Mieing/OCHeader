@interface IESECUniversalLoading : NSObject

+ (id)showFullLoadingOnView:(id)a0;
+ (void)dismissCustomFullLoading:(id)a0;
+ (id)createSloganLoadingView;
+ (id)createActionLoadingViewWithLoadingType:(unsigned long long)a0 isBlack:(BOOL)a1;
+ (id)createFullLoadingView;
+ (id)showActionLoadingOnView:(id)a0 loadingType:(unsigned long long)a1 isBlack:(BOOL)a2;
+ (void)dismissCustomActionLoading:(id)a0;
+ (id)showFullWindowLoading;
+ (void)dismissFullWindowLoading;

@end
