@class NSString;

@interface AWETransformerPOIStoreCardAdapter : NSObject <AWETransformerAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformToJSONObjectFrom:(id)a0 topMargin:(double)a1 bottomMargin:(double)a2 response:(id)a3;
- (id)__poiHeaderElementWithCardData:(id)a0 response:(id)a1;
- (id)__poiBottomElementWithCardData:(id)a0 response:(id)a1;
- (id)__backgroundImageURLString;
- (id)__showEventWithCardData:(id)a0 response:(id)a1;
- (id)__clickEventWithCardData:(id)a0 response:(id)a1 actionType:(id)a2 isJumpToNearby:(BOOL)a3 isJumpToPOIDetail:(BOOL)a4;
- (id)__arrowURLString;
- (id)__freshTranformerTrackWithCardData:(id)a0 response:(id)a1 eventName:(id)a2;
- (id)__poiCardTrackWithCardData:(id)a0 response:(id)a1 eventName:(id)a2 actionType:(id)a3;
- (id)__jumpToNearbyEventWithCardData:(id)a0 reponse:(id)a1;
- (id)__jumpToPOIDetailEventWithCardData:(id)a0 actionType:(id)a1;
- (id)__transformerSettings;

@end
