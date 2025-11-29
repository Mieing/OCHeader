@interface AWERadarRouter : NSObject

@property (class, nonatomic) BOOL hasOpenRadar;

+ (void)customTransitionWithInfo:(id)a0 description:(id)a1 needUploadLoaction:(BOOL)a2;
+ (void)openRadarIfAvailable:(id)a0;
+ (void)openRadarIfAvailable:(id)a0 enterMethod:(id)a1;
+ (void)customTransitionWithInfo:(id)a0 description:(id)a1 needUploadLoaction:(BOOL)a2 transToRadarMainVC:(BOOL)a3;
+ (BOOL)willNotTransfer;
+ (void)transToViewController:(id)a0 needUploadLoaction:(BOOL)a1;
+ (void)transToViewController:(id)a0 needUploadLoaction:(BOOL)a1 needPresent:(BOOL)a2;
+ (void)changeToPortraitIfNeededWithCompletion:(id /* block */)a0;
+ (BOOL)isTopVCShouldDismiss;
+ (void)customTransitionToShakeShareAwemeWithInfo:(id)a0;

@end
