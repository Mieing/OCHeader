@class NSString;

@interface TingApiPlayPrefetchServiceCpp : UnitRCObjcBaseProxyClass <TingApiPlayPrefetchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isEnablePrefetch;
- (void)preloadItemList:(id)a0 scene:(int)a1;
- (void)preloadItemList:(id)a0 scene:(int)a1 checkSpam:(BOOL)a2;
- (void)preloadItem:(id)a0 scene:(int)a1;
- (void)preloadItem:(id)a0 scene:(int)a1 checkSpam:(BOOL)a2;

@end
