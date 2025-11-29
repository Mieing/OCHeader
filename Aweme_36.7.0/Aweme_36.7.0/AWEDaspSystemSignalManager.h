@class NSString;

@interface AWEDaspSystemSignalManager : NSObject <AWECPULevelObserverProtocol>

@property (nonatomic) int memoryLevel;
@property (nonatomic) int systemPressure;
@property (nonatomic) long long cpuLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
