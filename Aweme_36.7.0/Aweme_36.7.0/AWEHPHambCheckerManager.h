@class NSLock, NSMutableDictionary;

@interface AWEHPHambCheckerManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL isLoad;
@property (retain, nonatomic) NSMutableDictionary *checkerMap;

- (void)p_tryLoad;
- (void)addChecker:(id)a0;
- (id)p_checkModuleData:(id)a0;
- (id)checkUserSettings:(id)a0;
- (id)checkDeviceSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
