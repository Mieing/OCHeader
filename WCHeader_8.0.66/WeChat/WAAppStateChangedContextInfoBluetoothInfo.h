@interface WAAppStateChangedContextInfoBluetoothInfo : MMObject

@property (nonatomic) BOOL canKeepAliveByBluetooth;
@property (nonatomic) BOOL isBluetoothBackgroundEnabled;
@property (nonatomic) BOOL isBluetoothSharedResourceBeenRecoverd;
@property (nonatomic) BOOL hasBluetoothConnection;

- (id)description;

@end
