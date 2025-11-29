@class HMDTTMonitor, NSDictionary, NSString;

@interface BDXLynxKit : NSObject <BDXLynxKitProtocol>

@property (retain, nonatomic) HMDTTMonitor *sdkMonitor;
@property (retain, nonatomic) NSDictionary *sdkMonitorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)initialize;
+ (unsigned long long)serviceType;

- (void)initLogObserver;
- (void)enableSDKMonitorWithDeviceID:(id)a0 channel:(id)a1;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)initLynxKit;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prefetchResourceWithURLs:(id)a0;
- (void).cxx_destruct;

@end
