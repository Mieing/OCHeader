@class NSString;
@protocol BUAHMDSDKMonitor;

@interface BUASDKMonitor : NSObject <BUASDKMonitor>

@property (retain, nonatomic) id<BUAHMDSDKMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
