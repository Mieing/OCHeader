@interface FBSDKAppEventsStateManager : NSObject

+ (void)clearPersistedAppEventsStates;
+ (void)persistAppEventsData:(id)a0;
+ (id)retrievePersistedAppEventsStates;
+ (id)filePath;

@end
