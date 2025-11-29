@class NSString;

@interface TingRedDotServiceCpp : UnitRCObjcBaseProxyClass <TingRedDotService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)requestRedDotItem:(id)a0 version:(int)a1;
- (id)getCenterRedDotItem;
- (void)clearCenterRedDotItem;
- (void)clearCenterRedDotItemWithParams:(id)a0;
- (id)getRedDotItem:(int)a0;
- (void)clearRedDotItemFromScene:(int)a0 scene:(int)a1;

@end
