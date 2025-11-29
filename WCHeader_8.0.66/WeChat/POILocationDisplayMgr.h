@class NSString;

@interface POILocationDisplayMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)getPOIDisplayNameWithLocation:(id)a0 Scene:(int)a1 SrcDisplayName:(id)a2 extraInfo:(id)a3;
- (void)logGoogleAddressResult:(id)a0 ForLocation:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetPOICityResponse:(id)a0;

@end
