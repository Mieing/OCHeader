@interface BDClientDataTrackerManager : NSObject

+ (id)shared;

- (void)setupWithConfig:(id)a0;
- (BOOL)offlineEventParamsWithEvent:(id)a0 params:(id)a1;
- (void)removeFieldsInDictionary:(id)a0 currentPath:(id)a1;

@end
