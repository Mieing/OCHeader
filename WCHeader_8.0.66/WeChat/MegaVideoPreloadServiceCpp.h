@class NSString;

@interface MegaVideoPreloadServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoPreloadService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;
+ (BOOL)hasCache:(id)a0;

- (void)preload:(id)a0 commentScene:(int)a1 downloadType:(int)a2;
- (void)stopPreload;
- (void)onPreloadStatusChange:(long long)a0 success:(BOOL)a1;

@end
