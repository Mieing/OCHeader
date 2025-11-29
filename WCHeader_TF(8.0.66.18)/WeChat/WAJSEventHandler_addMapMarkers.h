@class NSMutableArray, NSMutableDictionary;

@interface WAJSEventHandler_addMapMarkers : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *markersAddMap;
@property (retain, nonatomic) NSMutableArray *markersAddCluster;
@property (retain, nonatomic) NSMutableArray *markersId;
@property (retain, nonatomic) NSMutableDictionary *imageCache;

+ (id)makeIconImage:(id)a0;

- (void)handleJSEvent:(id)a0;
- (void)addMapMarker:(id)a0 marker:(id)a1;
- (unsigned long long)parseCollisionType:(id)a0 isCluster:(BOOL)a1;
- (void).cxx_destruct;

@end
