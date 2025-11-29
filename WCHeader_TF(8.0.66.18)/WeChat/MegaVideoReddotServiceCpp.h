@class NSString;

@interface MegaVideoReddotServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoReddotService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)saveReddotInfo:(id)a0;
- (BOOL)hasReddot;
- (void)clearReddot:(id)a0;
- (id)getReddot;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;

@end
