@class NSString, UIView;

@interface BDPContainerControllerPreloader : NSObject <BDPAPPFramePreloadProtocol>

@property (retain, nonatomic) UIView *customLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customLoadingView;
+ (void)startPreload;
+ (void)bootstrapLaunch;
+ (void)preLoadCustomLoadingView;
+ (id)sharedManager;

- (void).cxx_destruct;

@end
