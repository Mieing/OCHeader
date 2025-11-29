@class NSString, WABluetoothMonitoredDevice;

@interface WABluetoothMonitorOpenWeAppJob : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) WABluetoothMonitoredDevice *monitoredDevice;
@property (copy, nonatomic) id /* block */ terminateHandler;
@property (copy, nonatomic) id /* block */ openSuccessHandler;
@property (copy, nonatomic) id /* block */ openFailHandler;

- (id)description;
- (void).cxx_destruct;

@end
