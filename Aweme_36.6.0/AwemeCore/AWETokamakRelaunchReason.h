@interface AWETokamakRelaunchReason : NSObject

@property (nonatomic) unsigned int memoryPressureValue;
@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL isOOMDetected;

- (id)copy;

@end
