@interface PuzzleWebUAManager : NSObject

+ (id)hostUserAgent;
+ (id)systemUserAgent;
+ (id)baseCustomUserAgent;
+ (id)fetchSystemUserAgent;
+ (id)forceFetchSystemUserAgent;
+ (id)absoluteUserAgent;
+ (id)didReceiveSystemUA:(id)a0;
+ (id)uaRemoveBlankIfNeed:(id)a0;
+ (id)defaultKVStore;

@end
