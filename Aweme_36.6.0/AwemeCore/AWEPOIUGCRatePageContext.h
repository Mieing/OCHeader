@class NSString;

@interface AWEPOIUGCRatePageContext : DitoGeneralContainerPageContext <AWEPOIUGCRateContextProtocol>

@property (nonatomic) BOOL ugcItemFullDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)listUtil;

@end
