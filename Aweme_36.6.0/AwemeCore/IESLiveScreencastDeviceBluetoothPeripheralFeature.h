@class NSString;
@protocol IESLiveDeviceFeatureConsumeInterface;

@interface IESLiveScreencastDeviceBluetoothPeripheralFeature : NSObject <IESLiveDeviceFeatureInterface>

@property (retain, nonatomic) NSString *blueToothPeripheral;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL isRepeat;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) id<IESLiveDeviceFeatureConsumeInterface> consumeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopCollect;
- (id)initWithConsumeMode:(id)a0 isRepeat:(BOOL)a1 timeInterval:(double)a2 eventName:(id)a3;
- (void)consumeData;
- (void)startCollect;
- (void).cxx_destruct;

@end
