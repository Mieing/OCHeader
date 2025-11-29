@class NSArray, NSString;

@interface BDUGLuckyTimerComponentCache : NSObject <BDUGLuckyTimerComponentCacheInternalProtocol>

@property (copy, nonatomic) NSArray *savedTimerTaskKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)__triggerCacheExpire;
- (void)saveInfo:(id)a0 unuploadedTs:(double)a1 forTask:(id)a2 expireTime:(double)a3;
- (double)getSavedUnuploadedTsForTask:(id)a0;
- (id)getSavedInfoForTask:(id)a0;
- (void)clearSavedTaskCacheForTask:(id)a0;
- (double)__defaultExpireDate;
- (id)__convertToSaveKeyFromTaskKey:(id)a0;
- (id)__getCacheInfoForTask:(id)a0;
- (void)saveUnuploadedTs:(double)a0 forTask:(id)a1 expireTime:(double)a2;
- (void).cxx_destruct;

@end
