@class NSString;

@interface AWEShareRedPacketBaseService : AWEShareCommonImpl <AWEShareRedPacket>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithRedPacket:(id)a0 onViewController:(id)a1;
- (id)contextWithRedPacket:(id)a0;

@end
