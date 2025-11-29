@interface QBPreferencesService : QBWupService

+ (id)service;
+ (void)savePreferences:(id)a0;

- (void)getPreferences:(id /* block */)a0;
- (id)getPreferencesWithRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
