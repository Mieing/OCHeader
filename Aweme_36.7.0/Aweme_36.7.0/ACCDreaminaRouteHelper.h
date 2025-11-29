@interface ACCDreaminaRouteHelper : ACCAppRouteHelperBase

+ (id)sharedInstance;

- (id)getiTunesID;
- (id)getAppSchema;
- (BOOL)isAppInstalled;

@end
