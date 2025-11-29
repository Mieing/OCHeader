@class NSString;

@interface TingApiPlayCenterManagerCpp : UnitRCObjcBaseProxyClass <TingApiPlayCenterManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPlayCenterListener:(id)a0;
- (void)removePlayCenterListener:(id)a0;
- (id)getLastTapePlayingInfoSync;
- (id)getLastPlayingInfo;
- (id)getLastPlayingInfoStatusSync:(id)a0;

@end
