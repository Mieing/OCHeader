@class NSString;

@interface AWEPOIService : HTSService <AWEPOIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)POISessionManager;
- (double)filterListCellHeightForPOIModel:(id)a0;
- (Class)POIUtils;
- (id)cityManagerWithPageType:(long long)a0;
- (id)cityManagerWithPageType:(long long)a0 channelPageType:(long long)a1;
- (id)liveTrackManager;
- (id)publishAnchorManager;
- (id)interactionElementManager;
- (id)sourceTraceFlowManager;
- (id)cityManager;

@end
