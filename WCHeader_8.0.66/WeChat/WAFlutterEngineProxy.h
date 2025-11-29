@class NSString;

@interface WAFlutterEngineProxy : NSObject <IWAFlutterEngineService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)init;
- (id)ensureEngineGroup;
- (id)makeEngine:(id)a0 routeJson:(id)a1 isolatedFontCollection:(BOOL)a2;
- (void)destroyEngine:(id)a0;
- (void)increaseGroupUserCount;
- (void)decreaseGroupUserCount;
- (id)group;

@end
