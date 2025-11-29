@class HMDMonitorCallbackObject, NSMutableArray, NSString;

@interface IESECFrameDropMonitor : NSObject <IESECFrameDropMonitorProtocol>

@property (retain, nonatomic) HMDMonitorCallbackObject *hmdFrameDropCallback;
@property (retain, nonatomic) NSMutableArray *frameDropSubscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
