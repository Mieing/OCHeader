@class NSSet, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMSlardarInjectedInfoTracker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *mVcFilterKeysDict;
@property (retain, nonatomic) NSMutableDictionary *mVcContextKeysDict;
@property (retain, nonatomic) NSMutableDictionary *mVcIndexDict;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL featureEnable;
@property (retain, nonatomic) NSSet *pageDiableSet;
@property (retain, nonatomic) NSDictionary *bizDiableCongig;

+ (id)pageKeyWithPageType:(long long)a0;
+ (id)sharedInstance;

- (BOOL)p_checkTrackEnableWithBizKey:(id)a0 pageKey:(id)a1;
- (void)p_addInjInjectedInfoWithType:(long long)a0 value:(id)a1 bizKey:(id)a2 pageKey:(id)a3 identifyKey:(id)a4 disableIndex:(BOOL)a5;
- (void)p_removeInjInjectedInfoWithType:(long long)a0 identifyKey:(id)a1;
- (void)addInjectedInfo:(id /* block */)a0;
- (void)removeInjectedInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
