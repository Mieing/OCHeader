@class NSString;

@interface AWELivePOIProtocolImpl : NSObject <IESLivePOIProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLiveLocationViewContainerWithScene:(unsigned long long)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 didDismissBlock:(id /* block */)a3;
- (id)createLiveLocationManagerViewControllerWithScene:(unsigned long long)a0 viewControllerWillHideBlock:(id /* block */)a1 poiIDDidChangeBlock:(id /* block */)a2 roomID:(id)a3 anchorID:(id)a4 poiID:(id)a5 fetchRoomRelatedPOI:(BOOL)a6 liveEnterFrom:(id)a7;
- (id)currentLocationCityCode;

@end
