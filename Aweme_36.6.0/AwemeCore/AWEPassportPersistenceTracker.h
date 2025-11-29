@interface AWEPassportPersistenceTracker : NSObject

+ (id)sceneMap;
+ (void)trackPersistProcessWithSource:(id)a0 account:(id)a1 scene:(unsigned long long)a2 type:(unsigned long long)a3;
+ (void)trackPersistError:(unsigned long long)a0 account:(id)a1 source:(id)a2 scene:(unsigned long long)a3;
+ (void)checkAndTrackUidInvalid:(id)a0 account:(id)a1 scene:(unsigned long long)a2;

@end
