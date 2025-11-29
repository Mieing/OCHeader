@class NSDictionary, NSNumber;
@protocol Optional;

@interface RTVStreamMonitorSetting : JSONModel

@property (copy, nonatomic) NSDictionary<Optional> *config;
@property (nonatomic) BOOL muteBeforeAcceptEnable;
@property (nonatomic) BOOL streamExceptionCheckEnable;
@property (nonatomic) BOOL firstFrameStateErrorHangupEnable;
@property (nonatomic) BOOL firstFrameStateErrorCheckEnable;
@property (retain, nonatomic) NSNumber<Optional> *delayCheckIntervalValue;
@property (retain, nonatomic) NSNumber<Optional> *overtimeIntervalValue;
@property (nonatomic) BOOL needCorrectLocalStreamStateWhileStreamException;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;
+ (id)createSettingWithInjector:(id)a0;

- (double)delayCheckInterval;
- (double)overtimeInterval;
- (void).cxx_destruct;

@end
