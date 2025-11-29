@protocol BDXElementLottieDelegate, BDXElementMonitorDelegate, BDXElementToastDelegate, BDXElementLivePlayerDelegate, BDXElementNetworkDelegate, BDXElementReportDelegate, BDXElementVolumeDelegate;

@interface BDXElementAdapter : NSObject

@property (weak, nonatomic) id<BDXElementLottieDelegate> lottieDelegate;
@property (weak, nonatomic) id<BDXElementToastDelegate> toastDelegate;
@property (weak, nonatomic) id<BDXElementVolumeDelegate> volumeDelegate;
@property (weak, nonatomic) id<BDXElementLivePlayerDelegate> liveDelegate;
@property (weak, nonatomic) id<BDXElementReportDelegate> reportDelegate;
@property (weak, nonatomic) id<BDXElementNetworkDelegate> networkDelegate;
@property (weak, nonatomic) id<BDXElementMonitorDelegate> monitorDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
