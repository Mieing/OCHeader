@class NSString;

@interface BluetoothInfo : MMObject

@property (nonatomic) unsigned long long uploadTimeInterval;
@property (retain, nonatomic) NSString *peripheralName;

- (void).cxx_destruct;

@end
