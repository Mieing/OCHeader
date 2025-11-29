@class QMapRepeatTimer, QUniversalMapCounter, NSString, NSMutableDictionary, QPointEventEngine, QMediator, NSMutableArray, QMapContext, NSCache;

@interface QPointEventMananger : NSObject <QMapContextDelegate>

@property (retain, nonatomic) QMapRepeatTimer *timer;
@property (retain, nonatomic) QPointEventEngine *pointEventEngine;
@property (retain, nonatomic) NSMutableDictionary *eventIDDict;
@property (nonatomic) int requestFailureCounter;
@property (retain, nonatomic) NSCache *imgURLCache;
@property (retain, nonatomic) NSMutableArray *currentEventIDs;
@property (retain, nonatomic) NSMutableArray *requestEventIDs;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRectHolder;
@property (nonatomic) double mapScaleHolder;
@property (retain, nonatomic) NSCache *eventCache;
@property (weak, nonatomic) QMapContext *context;
@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QUniversalMapCounter *showCounter;
@property (nonatomic) BOOL pointEventEnable;
@property (nonatomic) int pointEventCloudControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disablePointEvent;
- (void)updatePointEventState:(int)a0;
- (void)startPointEvent;
- (void)invalidateTimer;
- (id)init;
- (void)dealloc;
- (void)refreshCurrentEventInfo:(id)a0 withEventID:(id)a1;
- (void)removeMarkers;
- (void)requestPointEventData;
- (void)notifyConnectionFail;
- (void)notifyConnectionSuccess:(id)a0;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)a0;
- (void)loadMarkerImage:(id)a0 completion:(id /* block */)a1;
- (id)constructMarkerWithDict:(id)a0 withImagPath:(id)a1;
- (void)assembleMarkerInfoDict:(id)a0;
- (void)setUpMarkerWithImagePath:(id)a0 withInfo:(id)a1;
- (id)createPointEventRequestData;
- (id)getRectBoundString;
- (id)getIconImagePath;
- (id)getImageURLMd5String:(id)a0;
- (id)constructInfoDictionary:(id)a0;
- (id)getMarkerInfo:(int)a0;
- (void)updateLocalPointEventConfig:(int)a0 withConfigPath:(id)a1;
- (id)generatePointEventMarkerPayload:(id)a0;
- (id)handlerForPointEventMarker:(id)a0;
- (void).cxx_destruct;

@end
