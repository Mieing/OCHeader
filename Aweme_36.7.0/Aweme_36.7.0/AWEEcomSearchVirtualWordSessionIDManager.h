@interface AWEEcomSearchVirtualWordSessionIDManager : NSObject

+ (id)sharedInstance;

- (id)getAppLogSessionID;
- (void)sendSessionIdToFe;
- (void)dealloc;

@end
