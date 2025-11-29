@class NSString;

@interface MegaVideoFeedFlowModelListenerCpp : UnitRCObjcBaseProxyClass <MegaVideoFeedFlowModelListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onItemListUpdated:(id)a0 fetchType:(int)a1 ret:(int)a2 count:(int)a3;

@end
