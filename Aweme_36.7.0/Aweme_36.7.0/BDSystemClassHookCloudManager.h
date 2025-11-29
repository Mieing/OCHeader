@class NSSet;

@interface BDSystemClassHookCloudManager : NSObject

@property (nonatomic) BOOL enableMonitor;
@property (retain, nonatomic) NSSet *disableClassNameSet;
@property (copy, nonatomic) id /* block */ perTimeMonitor;
@property (copy, nonatomic) id /* block */ allTimeMonitor;

+ (void)setEnableMonitor:(BOOL)a0;
+ (void)setDisableClassNameSet:(id)a0;
+ (BOOL)isDisableWithHookClassName:(id)a0;
+ (BOOL)isEnableMonitor;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
