@class NSMutableArray;

@interface WAJSEventHandler_addMapVisualLayer : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *markersAddMap;
@property (retain, nonatomic) NSMutableArray *markersAddCluster;

- (void)handleJSEvent:(id)a0;
- (void).cxx_destruct;

@end
